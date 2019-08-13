#include<stdio.h>
#include<string.h>
int main()
{ int n,count,i,k;
 char a[500];
 scanf("%d",&n);
 while(n--)
 { 
  count=0;
  scanf("%s",&a);
  k=strlen(a);
  for(i=0;i<k;i++) 
   if(a[i]<'A')
    count++;
  printf("%d\n",count);
 } 

