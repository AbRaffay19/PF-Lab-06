#include <stdio.h>
int main()
{
    int years;
    float money, factor;
    printf("Enter amount that You want to deposit: ");
    scanf("%f", &money);
    printf("Enter growth factor: ");
    scanf("%f", &factor);
    printf("Enter number of years: ");
    scanf("%d", &years);
    for (int i = 1; i <= years; i++)
    {
        money = money * factor;
    }
    printf("Final amount = %.2f\n", money);
    return 0;
}