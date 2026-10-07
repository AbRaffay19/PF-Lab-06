#include <stdio.h>
int main()
{
    int marks;
    do
    {
        printf("Enter marks (0-100): ");
        scanf("%d", &marks);
    } while (marks < 0 || marks > 100);
    if (marks >= 50)
    {
        printf("Pass\n");
    }
    else
    {
        printf("Fail\n");
    }
    return 0;
}