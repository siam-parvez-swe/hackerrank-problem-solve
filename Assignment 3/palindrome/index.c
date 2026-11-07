#include<stdio.h>
#include<string.h>
int is_palindrome(char str[])
{
    char str2[1000];

    int len = 0, i = 0, j = 0;

    len = strlen(str);

    for (j = 0, i = len-1; i >= 0; i--, j++)
    {
        str2[j] = str[i];
    }

    str2[j] = '\0';

    int d = strcmp(str, str2);

    if (d == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char str[1000];

    scanf("%999s", str);

    int result = is_palindrome(str);

    if (result == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}