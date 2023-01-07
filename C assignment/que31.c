/* C program to rotate bits of a number*/


#include <stdio.h>

#define INT_SIZE sizeof(int)        
#define INT_BITS INT_SIZE 

int rotateLeft(int num, unsigned int rotation);
int rotateRight(int num, unsigned int rotation);


int main()
{
    int num;
    unsigned int rotation;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter number of rotation: ");
    scanf("%u", &rotation);

    printf("%d left rotated %u times = %d\n\n",  num, rotation, rotateLeft(num, rotation));
    printf("%d right rotated %u times = %d\n", num, rotation, rotateRight(num, rotation));


    return 0;
}