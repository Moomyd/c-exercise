#include<stido.h>
int main(){
	int n,i,a[10],sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		for(j=0;j<n;i++){
			if(j!=i)
				sum+=a[i]*10+a[j];
		}
	}
	printf("%d",sum);
}


