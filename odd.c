#include <stdio.h>
int main() 
{
    int num, count = 0, digit;
    printf("Enter number: ");
    scanf("%d", &num);
    while (num != 0) {
        digit = num % 10;
        if (digit % 2 != 0) {
            count++;
        }
        num = num / 10;
    }
    printf("Odd digits = %d", count);
}
