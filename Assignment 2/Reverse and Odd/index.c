#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int N;
    scanf("%d", &N);
    int a[N];
    for (int i = 1; i <= N; i++)
    {
        scanf("%d ", &a[i]);
    }
    for (int i = N; i > 0; i--)
    {
        if (i % 2 == 0)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}
