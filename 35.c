#include<stdio.h>
void max(double a[]){
	double max;
	max=a[0];
	int i;
	for(i=0;i<sizeof(a);i++)
		if(a[i]>a[0])
			max=a[i];
	return 0;
}
int main(){
	int t,n,i;
	double h[1000];
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%ld",&h[i]);
		max(h);
	}
	return 0;
}


                        



