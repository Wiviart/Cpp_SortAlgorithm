#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;

void    print_array(int list[], int length);
void           swap(int* a, int* b);

void selection_sort(int list[], int length);

int main() {
    int list[] = { 5, 9, 8, 7, 3, 10, 2, 4, 1, 6 };
    int length = sizeof(list) / sizeof(list[0]);
    int start, end;

    start = clock();

    selection_sort(list, length);

    end = clock();
    printf("Time used: %f\n", (double)(end - start) / CLOCKS_PER_SEC);
}

void    print_array(int list[], int length) {
    printf("[%d]:", length);
    for (int i = 0; i < length; i++) {
        printf(" %2d ", list[i]);
    }
    cout << endl;
}
void           swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int list[], int length) {
    printf("Selection Sort:\n");
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < length - 1; i++) {

        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < length; j++)
            if (list[j] < list[min_idx]) {
                min_idx = j;
            }

        // Swap the found minimum element with the first element
        if (min_idx != i) {
            swap(list[min_idx], list[i]);
            print_array(list, length);
        }
    }
}