#include <stdio.h>
int main()
{
    int stock[10];
    int search, found = 0;
    printf("Enter stock levels for 10 shelves:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &stock[i]);
    }
    printf("\nReverse order:\n");
    for (int i = 9; i >= 0; i--)
    {
        printf("%d ", stock[i]);
    }
    printf("Enter level You want to search\n");
    scanf(" %d",&search);
    for (int i = 0; i < 10; i++)
    {
        if (search==stock[i])
        {
            printf("Index %d holds it \n",i);
            found=1;          
        }
    }
        if(found==0)
        {printf("%d doesnt exist",search);}
    return 0;    
}
    