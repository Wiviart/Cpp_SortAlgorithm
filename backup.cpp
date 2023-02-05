#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;

void    print_array(int list[], int length);
void           swap(int* a, int* b);

void insertion_sort(int list[], int length);
void selection_sort(int list[], int length);
void    bubble_sort(int list[], int length);
void    binary_sort(int list[], int length);
void     quick_sort(int list[], int length);
void     radix_sort(int list[], int length);
void     shell_sort(int list[], int length);
void       std_sort(int list[], int length);
// Merge Sort
void     merge_sort(int list[], int length);
// Quick Sort
void     quick_sort(int list[], int length);
// Heap Sort
// Counting Sort
// Radix Sort
// Bucket Sort
// Bingo Sort Algorithm
// ShellSort
// TimSort
// Comb Sort
// Pigeonhole Sort
// Cycle Sort
// Cocktail Sort
// Strand Sort
// Bitonic Sort
// Pancake sorting
// BogoSort or Permutation Sort
// Gnome Sort
// Sleep Sort � The King of Laziness
// Structure Sorting in C++
// Stooge Sort
// Tag Sort (To get both sorted and original)
// Tree Sort
// Odd-Even Sort / Brick Sort
// 3-way Merge Sort

int main() {
    int list[] = { 5, 9, 8, 7, 3, 10, 2, 4, 1, 6 };
    int length = sizeof(list) / sizeof(list[0]);
    int start, end;

    start = clock();

    //insertion_sort(list, length);
    // selection_sort(list, length);
    //    bubble_sort(list, length);
    //    binary_sort(list, length);
    quick_sort(list, length);
    //     radix_sort(list, length);
    //     shell_sort(list, length);
    //       std_sort(list, length);

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
            swap(&list[min_idx], &list[i]);
            print_array(list, length);
        }
    }
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
void    binary_sort(int list[], int length) {

}
void     quick_sort(int list[], int length) {
    int i = 0;
    
    for (int j = 0; j < length; j++) {
        printf("%2d - %2d - %2d : ", length, i, j);
        
        if (list[j] <= list[length - 1]) {
            printf("Swapping %d and %d:\n",list[j],list[i]);
            swap(list[j], list[i]);
            i++;
        }else cout << endl;

        print_array(list, length);
    }
    
    int index = i;
    
}
void     radix_sort(int list[], int length) {}
void     shell_sort(int list[], int length) {}
void       std_sort(int list[], int length) {}