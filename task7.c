#include <stdio.h>
int main()
{
    int choice;
    do
    {
        printf("Enter your choice\n");
        printf("1)add item\n");
        printf("2)Remove item\n");
        printf("3)View Total\n");
        printf("4)Checkout\n");
        scanf("%d",&choice);
        if (choice == 1)
        {
            printf("Item added.\n");
        }
        else if (choice == 2)
        {
            printf("Item removed.\n");
        }
        else if (choice == 3)
        {
            printf("Total displayed.\n");
        }
        else if (choice == 4)
        {
            printf("Checkout completed.\n");
        }
        else
        {
            printf("Invalid choice.\n");
        }
    } while (choice!=4);
     return 0;
}