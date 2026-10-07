#include <stdio.h>
int main()
{
int price = 500;
for (int show = 1; show <= 10; show++)
    {
     printf("Show %d = Rs. %d\n", show, price);
     price = price + 50;
    }
    return 0;
}