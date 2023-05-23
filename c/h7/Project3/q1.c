#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_SIZE 100
int main() {
    printf("Enter size of array:");
    int n;
    scanf("%d", &n);
    printf("Enter %d elements in the array:",n);
    int i[MAX_SIZE];
    for (int num = 0; num < n; num++) {
        scanf("%d", &i[num]);
    }
    printf("Elements in array are:");
    for (int num = 0; num < n; num++) {
        printf(" %d,", i[num]);
    }
    return 0;
}