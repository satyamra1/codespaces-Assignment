#include <stdio.h>
#include <math.h>

void toCheck(int n) {

    int c = 0;

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            c += i;
        }
    }

    if (c == n) {
        printf("The number %d is Perfect number!", c);
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            break;
        }
        if (i == n - 1) {
            printf("The number %d is Prime!", n);
        }
    }

    int a, b = n, temp = 0;

    for (int i = 1; b != 0; i++) {
        a = b % 10;
        b /= 10;

        int p = pow(a, 3);
        temp += p;
    }

    if (temp == n) {
        printf("The number %d is Armstrong!", temp);
    }
}

int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    toCheck(n);
}