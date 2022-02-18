#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#include "selection_sort.h"
#include "hybrid.h"

int main() {
    int startTest = 0;
    int choose;
    int i;

    printf("-------------\nWhich file do you wish to analyze?\n1. Quick Sort\n2. Selection Sort\n3. Hybrid\n-------------\n: ");
    scanf("%d", &choose); 

    switch (choose)
    {
    case 1:
        for (i = 0; i < 100; i++) {
            double time_spent = 0.0;
            startTest = startTest + 10;
            int arr[startTest];
            int n = startTest;
            srand(0);

            int j;
            for (j = 0; j < startTest; j++) {
                arr[j] = rand();
            }

            clock_t begin = clock();
            quickSort(arr, 0, n - 1);
            clock_t end = clock();

            time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
            printf("%f", time_spent);
            printf("\n");
        }
        break;
    case 2: 
        for (i = 0; i < 100; i++) {
            double time_spent = 0.0;
            startTest = startTest + 10;
            int arr[startTest];
            int n = startTest;
            srand(0);

            int j;
            for (j = 0; j < startTest; j++) {
                arr[j] = rand();
            }

            clock_t begin = clock();
            selectionSort(arr, n);
            clock_t end = clock();

            time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
            printf("%f", time_spent);
            printf("\n");
        }
        break;
    case 3:
        printf("Hello");
        break;
    }
}
