#include<stdio.h>
int main(){
	int m,n,i;
	double x,sum;
	scanf("%d",&m);
	while(m--){
		scanf("%d",&n);
		sum=0;
		for(i=1;i<=n;i++){
			x=1.00/i;
			if(i%2==0){
				sum-=x;
			}else{
				sum+=x;
			}
		}
		printf("%.2lf\n",sum);
	}
	return 0;
}	
