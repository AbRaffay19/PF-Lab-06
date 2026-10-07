#include <stdio.h>
int main()
{
int pin,digit,sum=0,reverse=0;
printf("Enter PIN\n");
scanf("%d",&pin);
    while (pin>0)
    {
        digit = pin %10;
        sum = sum + digit;
        reverse = reverse*10 + digit;
        pin = pin/10;
    }
    printf("Sum of digits= %d\n Reverse PIN=reverse=%d",sum,reverse);
    return 0;
}