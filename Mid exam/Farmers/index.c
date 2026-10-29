#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n][3];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int final = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int mul = a[i][0] * a[i][2];
            int sum = a[i][0] + a[i][1];
            int ans = mul / sum;
            final =   a[i][2]-ans;
            
            
            // printf("%d ", a[i][j]);
        }
        printf("%d", final);
        printf("\n");
    }

    return 0;
}
