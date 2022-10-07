def bubblesort(elements):
    swapped = False
    
    for n in range(len(elements)-1, 0, -1):
        for i in range(n):
            if elements[i] > elements[i + 1]:
                swapped = True
                
                elements[i], elements[i + 1] = elements[i + 1], elements[i]       
        if not swapped:
           
            return
