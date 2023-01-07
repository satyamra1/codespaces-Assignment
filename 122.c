#include <stdio.h>

int cube(int n) {
    return n * n * n;
}

int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("The cube is : %d", cube(n));
    return 0;
}