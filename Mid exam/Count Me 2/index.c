#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char ch[100000];
    scanf("%s", &ch);
    int len = strlen(ch);
    int consonants = 0;
    for (int i = 0; i < len; i++)
    {
        if (ch[i] == 'a' ||
            ch[i] == 'A' ||
            ch[i] == 'e' ||
            ch[i] == 'E' ||
            ch[i] == 'i' ||
            ch[i] == 'I' ||
            ch[i] == 'o' ||
            ch[i] == 'O' ||
            ch[i] == 'u' ||
            ch[i] == 'U'

        )
        {
        }
        else
        {
            consonants++;
        }
    }
    printf("%d", consonants);

    return 0;
}
