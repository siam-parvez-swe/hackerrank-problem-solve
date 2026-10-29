#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch[100000];
    int freq[26] = {0};

    scanf("%s", ch);

    for (char c = 'a'; c <= 'z'; c++)
    {
        int count = 0;

        for (int i = 0; ch[i] != '\0'; i++)
        {
            if (ch[i] == c)
            {
                count++;
            }
        }

        if (count > 0)
        {
            printf("%c - %d\n", c, count);
        }
    }

    return 0;
}