#include <stdio.h>

void compare(int a, int b) {
    if (a == b) {
        printf("Both are equal");
    } else if (a > b) {
        printf("%d is Maximum\n%d is Minimum", a, b);
    } else {
        printf("%d is Maximum\n%d is Minimum", b, a);
    }
}

int main() {
    int a, b;
    printf("Enter two number : ");
    scanf("%d %d", &a, &b);
    compare(a, b);
    return 0;
}