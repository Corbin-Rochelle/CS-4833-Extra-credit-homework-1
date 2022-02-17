# Written by Corbin Rochelle
from hybrid import *
from quick_sort import *
from selection_sort import *
import numpy
import timeit

startTest = 0
choose = int(input("-------------\nWhich file do you wish to analyze?\n1. Quick Sort\n2. Selection Sort\n3. Hybrid\n-------------\n: "))

if choose == 1:
    for i in range(9):
        startTest = startTest + 10
        arr = numpy.random.randint(1,101,startTest)

        n = len(arr)
        time = timeit.timeit(lambda: quickSort(arr, 0, n-1))
        print(n, time)

elif choose == 2:
    print("hello")

elif choose == 3:
    print("hello")
