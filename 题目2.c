#include<stdio.h>
void sum(int start,int end)
{
    int i;
    int j=0;

    for(i=start;i<=end;i++){
        if(i%2!=0)
        {
            printf("%d,",i);
            j+=i;
        }
    }
printf("%d",j);
return 0;
}
int main(void)
{
    int start=1;

    int end=100;

    sum(start,end);
    return 0;
}

