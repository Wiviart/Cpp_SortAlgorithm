#include <iostream>
#include <time.h>
using namespace std;

void    print_array(int list[], int length);
void           swap(int* a, int* b);

void insertion_sort(int list[], int length);
void    bubble_sort(int list[], int length);

int main() {
    int list[] = { 5, 9, 8, 7, 3, 10, 2, 4, 1, 6 };
    int length = sizeof(list) / sizeof(list[0]);
    int start, end;

    start = clock();

    bubble_sort(list, length);

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

void    bubble_sort(int list[], int length) {
    int time = 1;
    printf("Bubble Sort:\n");
    while (time < length) {
        for (int i = 0; i < length; i++) {
            if (list[i] > list[i + 1]) {
                swap(list[i], list[i + 1]);
                print_array(list, length);
            }
        }
        time++;
    }
}