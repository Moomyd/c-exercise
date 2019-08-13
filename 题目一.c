#include<stdio.h>
int main()
{
    float a,b,c;
    printf("ÇëÊäÈëÈý¸öÊµÊý:\n");
    scanf("%f%f%f",&a,&b,&c);

    if(a+b<=c || a+c<=b || b+c<=a)
        printf("0\n");
    else if(a==b&&b==c)
        printf("1\n");
    else if(a==b || b==c || c==a)
        printf("2\n");
    else if(a+b>c ||a+c>b ||b+c>a)
        printf("3\n");

 return 0;
}

