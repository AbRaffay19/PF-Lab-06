#include<stdio.h>
int main()
{
int speed[5],rshift,hpr=0,mpr=0,npr=0;
int code[5],lshift;
for (int i = 0; i < 5; i++)
{
    printf("Enter speed of vehicle %d\n",i+1);
    scanf("%d",&speed[i]);
    printf("Enter code for vehicle %d\n",i+1);
    scanf("%d",&code[i]);
}
for (int i = 0; i < 5; i++)
{
    lshift=code[i]<<2;
    rshift=code[i]>1;
    printf("Original code for vehicle %d :%d\n",i+1,code[i]);
    printf("Left shift value:%d\n",lshift);
    printf("Right shift value:%d\n",rshift);
    printf("Speed = %d km/h\n",speed[i]);
    if (lshift>20&& speed[i]>=80)
    {
        printf("High priority\n");
        hpr++;
    }
    else if (lshift > 10 && speed[i] >= 60)
        {
            printf("Medium Priority\n");
            mpr++;
        }
    else
        {
            printf("Normal Priority\n");
            npr++;
        }
    }    
    printf("\nHigh Priority vehicles = %d\n", hpr);
    printf("Medium Priority vehicles = %d\n", mpr);
    printf("Normal Priority vehicles = %d\n", npr);
    return 0;


}