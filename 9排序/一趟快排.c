#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void fun(int* arr, int len) {
    int pivot = arr[0];
    int low = 0;
    int high = len - 1;
    while (low < high) {
        while (low < high && arr[high] > pivot)
            high--;
        arr[low] = arr[high];
        while (low < high && arr[low] < pivot)
            low++;
        arr[high] = arr[low];
    }
    arr[low] = pivot;
}



int main() {
    #define len 5
    int arr[len];
    for (size_t i = 0; i < len; i++) {
        arr[i] = arc4random() % 100;
    }
    for (size_t i = 0; i < len; i++) {
        printf("%-3d", arr[i]);
    }
    printf("\n");
    fun(arr, len);
    for (size_t i = 0; i < len; i++) {
        printf("%-3d", arr[i]);
    }
    return 0;
}