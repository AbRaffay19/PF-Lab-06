#include <stdio.h>
int main()
{
    char username[20];
    int vowels = 0;
    int consonants = 0;
    printf("Enter username: ");
    scanf("%20s", username);
    for (int i = 0; username[i] != '\0'; i++)
    {
        if (username[i] >= 'a' && username[i] <= 'z')
        {
            username[i] = username[i] - 32;
        }
        if (username[i] == 'A' || username[i] == 'E' ||
            username[i] == 'I' || username[i] == 'O' ||
            username[i] == 'U')
        {
            vowels++;
        }
        else if (username[i] >= 'A' && username[i] <= 'Z')
        {
            consonants++;
        }
    }
    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    printf("Uppercase username = %s\n", username);
    return 0;
}