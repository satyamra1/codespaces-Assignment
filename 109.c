/*C program to convert Octal number system to Decimal number system*/

#include <stdio.h>
#include <math.h>

int main()
{
    long long octal, tempOctal, decimal;
    int rem, place;
    printf("Enter any octal number: ");
    scanf("%lld", &octal);
    tempOctal = octal;

    decimal = 0;
    place = 0;
    
    while(tempOctal > 0)
    {

        rem = tempOctal % 10;
        decimal += pow(8, place) * rem;
        tempOctal /= 10;

        place++;
    }

    printf("Octal number = %lld\n", octal);
    printf("Decimal number = %lld", decimal);

    return 0;
}