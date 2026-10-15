#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, div, sum = 0;
    scanf("%d", &n);
    // for(int i=0; i<5; i++){
    //     div = n % 10;
    //     n = n - 10;
    //     printf("n = %d", n);
    //     printf("%d ", div);
    //     sum = sum + div;
    // }
    int i = 0;
    while ( i<5)
    {
        div = n % 10;
        n = n / 10;
        // printf("n = %d", n);
        // printf("%d ", div);
        sum = sum + div;
        i++;
    }

    printf("%d", sum);
    return 0;
}