#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d\n%d\n%d\n%d", &a, &b, &c, &d);
    // int ans = max_of_four(a, b, c, d);
    int ans = a;
    if (ans < b && b > c && b > d)
    {
        ans = b;
    }
    else if (ans < c && c > b && c > d)
    {
        ans = c;
    }
    else if (ans < d && d > b && d > c)
    {
        ans = d;
    }

    printf("%d", ans);

    return 0;
}