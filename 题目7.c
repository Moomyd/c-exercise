#include "stdio.h"
#include <math.h>

void sortA(int *a, int n){
  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if (a[j]>a[j+1])
	{
	  int t=a[j];
	  a[j]=a[j+1];
	  a[j+1]=t;
	}
    }
  }
}/*将a数组从小到大排序*/

int check(int a[],int n){
  int i;
  int b[n];
  if (n==1)
  {
    printf("yes\n");
    return 0;
  }else{
    for(i=0;i<n-1;i++)
    b[i]=fabs(a[i]-a[i+1]);/*b[i]被赋予a[i]-a[i-1]的绝对值*/
    sortA(b,n);/*对b数组中的n个数进行排序*/
    for(i=0;i<n-2;i++)
    {
       if (b[i+1]-b[i]==1)
         continue;
       else break;
     }
     if (i==n-2) printf("yes\n");
     else printf("no\n");
   }
   return 0;
}/*若数组为从小到大排序则输出yes若不是输出no*/
int main(){
  int array[]={4,8,10,7,6,11};
  check(array,6);
  return 0;
}

