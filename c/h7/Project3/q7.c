#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_SIZE 100
void bubbleSort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    printf("Enter size of array:");
    int n;
    int a[MAX_SIZE];
    scanf("%d", &n);
    printf("Enter elements in array:");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    bubbleSort(a, n);
    printf("Elements of array in ascending order:");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}