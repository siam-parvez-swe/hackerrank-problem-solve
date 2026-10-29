#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    char ch[100000];

    for (int i = 0; i < n; i++)
    {


        scanf("%s", &ch);
        int len = strlen(ch);
        int small = 0, digit = 0, capital = 0;
        for (int j = 0; j < len; j++)
        {

            if (ch[j] >= 48 && ch[j] <= 57)
            {
                digit++;
            }
            else if (ch[j] >= 65 && ch[j] <= 90)
            {
                capital++;
            }
            else if (ch[j] >= 97 && ch[j] <= 122)
            {
                small++;
            }
        }

        printf("%d %d %d\n", capital, small, digit);
    }


    return 0;
}
