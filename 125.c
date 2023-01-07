#include <stdio.h>

void circle(int r) {
    int dia = 2 * r;
    float circum = 2 * 3.14 * r;
    float area = 3.14 * r * r;
    printf("The Diameter is : %d\nThe Circumference is : %f\nThe Area is : %f", dia, circum, area);
}

int main() {
    int r;
    printf("Enter the radius of Circle : ");
    scanf("%d", &r);
    circle(r);
    return 0;
}