#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;

void    print_array(int list[], int length);
void           swap(int* a, int* b);

void insertion_sort(int list[], int length);

int main() {
    int list[] = { 5, 9, 8, 7, 3, 10, 2, 4, 1, 6 };
    int length = sizeof(list) / sizeof(list[0]);
    int start, end;

    start = clock();

    insertion_sort(list, length);

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
void insertion_sort(int list[], int length) {
    printf("Insertion Sort:\n");
    for (int i = 1; i < length; i++) {
        int j = i;
        while (j > 0 and list[j - 1] > list[j]) {
            swap(list[j - 1], list[j]);
            print_array(list, length);
            j = j - 1;
        }
    }
}