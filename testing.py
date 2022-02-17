# Written by Corbin Rochelle
import hybrid
import quick_sort
import selection_sort
import numpy

startTest = 10
choose = input("-------------\nWhich file do you wish to analyze?\n1. Quick Sort\n2. Selection Sort\n3. Hybrid\n-------------\n: ")

if choose == 1:
    for i in range(10):
        startTest = startTest * i
        arr = numpy.random.randint(1,101,startTest)
        
        n = len(arr)
        quickSort(arr, 0, n-1)

elif choose == 2:
    print("hello")

elif choose == 3:
    print("hello")
