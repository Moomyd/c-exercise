#include<stdio.h>
#include<stdlib.h>
#define MAX 10000

void getPiv(int *input,int size)
{
    if(input==NULL) return;
    int max[MAX]={0};
    int i=1;
    max[0]=input[0];
    for(;i<size;i++){
        max[i]=max[i-1];
        if(input[i]>max[i])
            max[i]=input[i];
    }
    int min=input[size-1];
    for(i=size-2;i>=0;i--){
        min=min>input[i]?input[i]:min;
        if(input[i]>=max[i]&&input[i]<=min)
            printf("%d\n",input[i]);

    }
}
int main()
{
    int input[]={1,2,5,3,4};
    getPiv(input,sizeof(input)/sizeof(int));
}

