#include <stdio.h>

void check(int n) {
    if (n % 2 == 0) {
        printf("The %d is even", n);
    } else {
        printf("The %d is odd", n);
    }
}

int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    check(n);
    return 0;
}