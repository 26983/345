#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_SIZE 100

int sum(int* arr, int n);
int main() {
    printf("Input size of array:");
    int n;
    int a[MAX_SIZE];
    scanf("%d", &n);
    printf("Input %d number of elements in the array:", n);
    for (int i = 0; i < n; i++) {
        printf("\nelement - %d:", i);
        scanf("%d", &a[i]);
    }

    int result = sum(a, n);

    printf("Sum of Array : %d", result);
    return 0;
}

int sum(int* arr, int n) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        s += *(arr + i);
    }
    return s;
}
