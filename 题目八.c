#include<stdio.h>
int main()
{
	double a[100],max,min,sum;
	int n,i;
	while(scanf("%d",&n)!=EOF)
	{
		sum=0;
		for(i=0;i<n;i++)
		scanf("%1lf",&a[i]);
		max=a[0];min=a[0];
		for(i=0;i<n;i++)
		{
		 if(max<a[i])
		 max=a[i];
		 if(min>a[i])
		 min=a[i];
		 }
		 for(i=0;i<n;i++)
		 if(a[i]!=max&&a[i]!=min)
		 sum+=a[i];
		 printf("%2f\n",sum/(n-2));
	
         }
	 return 0;
}
