'''
usage of script:

python multi_clip_board.py save <keyword> => saves the text to clipboard
python multi_clip_board.py list => lists all the keywords
python multi_clip_board.py <keyword> => loads the text to clipboard
python multi_clip_board.py delete => deletes all the copied texts
python multi_clip_board.py delete <keyword> => deletes the particular keyword, value pair
'''

try:
    import sys
    import shelve
    import pyperclip
except:
    import subprocess
    if sys.platform in ['win32', 'cygwin']:
        subprocess.check_output("python -m pip install --upgrade pip", shell=True)
        subprocess.check_output("python -m pip install pyperclip", shell=True)
    else:
        subprocess.check_output("pip install --upgrade pip", shell=True)
        subprocess.check_output("pip install pyperclip", shell=True)
    import pyperclip

clip_board = shelve.open('clip')

def usage():
    print("[+] Usage of script\n[+] py.exe mcb.pyw save <keyword> (to save the text)\n[+] py.exe mcb.pyw <keyword> (to copy the text to clipboard)\n[+] py.exe mcb.pyw list (to list all the keywords in the file)\n[+] py.exe mcb.pyw delete (to delete all the copied texts)\n[+] py.exe mcb.pyw delete <keyword> (to delete particular copied text)")
    sys.exit()

if len(sys.argv) == 3:
    if sys.argv[1].lower() == 'save':
        clip_board[sys.argv[2]] = pyperclip.paste()
        print("[+] saved into a file")
    elif sys.argv[1].lower() == 'delete':
        del clip_board[sys.argv[2]]
        print(f"[-] deleted the copied text related to keyword {sys.argv[2]}")
    else:
        usage()

elif len(sys.argv) == 2:
    if sys.argv[1].lower() == 'list':
        print(list(clipBoard.keys()))
    elif sys.argv[1].lower() == 'delete':
        print("[-] Deleting all the copied text in the session")
        for keyword in list(clipBoard.keys()):
            del clipBoard[keyword]
    else:
        if sys.argv[1] in list(clipBoard.keys()):
            print(f"[+] Copied the text with keyword {sys.argv[1]}")
            pyperclip.copy(clipBoard[sys.argv[1]])
        else:
            print("[+] No such keyword in the file")
            print("[+] Here is the list of keywords in the file")
            print(list(clipBoard.keys()))
else:
    usage()

clip_board.close()