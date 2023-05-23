#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_SIZE 100
int main() {
    printf("Enter size of the array:");
    int n;
    scanf("%d", &n);
    printf("Enter %d elements in the array:", n);
    int arr[MAX_SIZE];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("Sum of all elements of array =%d", sum);
    return 0;
}