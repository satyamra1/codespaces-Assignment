/*C program to convert from Decimal number system to hexadecimal number system*/

#include <stdio.h>
#include <string.h>

int main()
{
    char HEXVALUE[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    long long decimal, tempDecimal;
    char hex[65];
    int index, rem;
    printf("Enter any decimal number: ");
    scanf("%lld", &decimal);
    tempDecimal = decimal;

    index = 0;
    while(tempDecimal !=0)
    {
        rem = tempDecimal % 16;

        hex[index] = HEXVALUE[rem];

        tempDecimal /= 16;

        index++;
    }
    hex[index] = '\0';

    strrev(hex);

    printf("\nDecimal number = %lld\n", decimal);
    printf("Hexadecimal number = %s", hex);

    return 0;
}