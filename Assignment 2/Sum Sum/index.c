#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int a[N];
    for (int i = 1; i <= N; i++)
    {
        scanf("%d ", &a[i]);
    }
    int sum1 = 0, sum2 = 0;
    for (int i = 1; i <= N; i++)
    {
        if (a[i] > 0)
        {
            sum1 = sum1 + a[i];
        }
        else if (a[i] < 0)
        {
            sum2 = sum2 + a[i];
        }
    }
    printf("%d %d", sum1, sum2);
    return 0;
}