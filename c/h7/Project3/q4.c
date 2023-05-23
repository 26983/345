#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_SIZE 100
int main() {
    printf("Enter size of the array:");
    int n;
    scanf("%d", &n);
    printf("Enter %d elements in array:", n);
    int a[MAX_SIZE];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            sum++;
        }
    }
    int odd = n - sum;
    printf("Toatl even elements:%d\n", sum);
    printf("Total odd elements:%d", odd);
    return 0;
}