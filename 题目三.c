#include <stdio.h>

int main(void)
{
    int n=4;
    int i,a,b;

    for (i=1;i<=n;i++){
        for (a=n-1;a>=i;a--)
            putchar('*');
        for (b=1;b<=2*i-1;b++)
            putchar(' ');
            printf("\n");
    }
    for (i=n-1;i>=1;i--){
        for (a=i;a<=n-1;a++)
            putchar('*');
        for (b=1;b<=2*i-1;b++)
            putchar(' ');
        printf("\n");

    }
    return 0;
    }


