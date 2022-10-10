def evenOdd(n):
     
    
    if(n==0):
        return True
       
    
    elif(n==1):
        return False
    else:
        return evenOdd(n-2)
       
