#include <stdio.h>
#include <math.h>
int main(void)
{
    printf("请输入一个正整数和一个符号：");
    int a;
    char b;
    scanf("%d%c",&a,&b);
    int i=1;
    int c=1;
    int d=1;
    if(a<3)
        printf("%c\n%d",b,a-1);
    else
    while (a>c){
        i=i+2;
        d=c;
        c=c+2*i;
    }
    i=i-2;
    int m=i;
    int j=0;
    //打印沙漏前半段
    while(i>=1)
    {
        for (int k=1;k<=j;k++){
            printf(" ");
        }
        for (int n=1;n<=i;n++){
            printf("%c",b);
        }
        printf("\n");
        i=i-2;
        j=j+1;
    }
    //打印沙漏后半段
    j=j-2;
    i=i+4;
    while(j>=0){
        for(int t=1;t<=j;t++){
            printf(" ");
        }
        for (int h=1;h<=i;h++){
            printf("%c",b);
        }
        printf("\n");
        j=j-1;
        i=i+2;
    }
    printf("\n%d,a-d");
}

