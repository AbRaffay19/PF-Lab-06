#include <stdio.h>
int main()
{
    int code[10];
    int accepted = 0;
    int flagged = 0;
    int highest;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter access code %d: ", i + 1);
        scanf("%d", &code[i]);
    }
    highest = code[0];
    for (int i = 0; i < 10; i++)
    {
        int left = code[i] << 2;
        int right = code[i] >> 1;
        printf("\nEmployee %d\n", i + 1);
        printf("Original code = %d\n", code[i]);
        printf("Left shifted = %d\n", left);
        printf("Right shifted = %d\n", right);
        if (left > 100 && right % 2 == 0)
        {
            printf("Accepted\n");
            accepted++;
        }
        else
        {
            printf("Flagged\n");
            flagged++;
        }
        if (code[i] > highest)
        {
            highest = code[i];
        }
    }
    printf("\nTotal Accepted = %d\n", accepted);
    printf("Total Flagged = %d\n", flagged);
    printf("Highest original access code = %d\n", highest);
    printf("\nCodes whose right-shifted value is greater than 20:\n");
    for (int i = 0; i < 10; i++)
    {
        int right = code[i] >> 1;
        if (right > 20)
        {
            printf("%d\n", code[i]);
        }
    }
    return 0;
}