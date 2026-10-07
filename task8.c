#include<stdio.h>
int main()
{
int temp[8];
int hottest,coldest,second;
for (int i = 0; i <8; i++)
{
    printf("Enter the temperature\n");
    scanf("%d",&temp[i]);
}
    hottest=temp[0];
    coldest=temp[0];
for (int i = 1; i <8; i++)
{
    if (temp[i]>hottest)
    {
    hottest=temp[i];
    }
    if (temp[i]<coldest)
    {
    coldest=temp[i];
    }
}
    second=-8789;
    for (int i = 0; i < 8; i++)
    {
        if (temp[i] < hottest && temp[i] > second)
        {
            second = temp[i];
        }
    }
    printf("Hottest = %d\n", hottest);
    printf("Coldest = %d\n", coldest);
    printf("Second hottest = %d\n", second);

return 0;
}