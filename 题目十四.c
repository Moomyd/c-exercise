#include<stdio.h>
int main(){
	int n,a[100],i,j,temp;
	while((scanf("%d",&n)!=EOF)&&(n!=0)){
		for(i=1;i<=n;i++){
			scanf("%d ",&a[i]);
		}
	 int mix=a[1];
		for(i=1;i<=n;i++){
			if(a[i]<mix){
				mix=a[i];
				j=i;
			}
		}
		if(mix!=a[1]){
			temp=a[1];
			a[1]=mix;
			a[j]=temp;
		}
		for(i=1;i<=n;i++){
			printf("%d ",a[i]);
		}
		printf("\n");
		
	}
	return 0;
}
	
