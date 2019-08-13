#include<stdio.h>
int main(){
	int t,i,a[1000];
	scanf("%d",&t);
	for(i=0;i<=t;i++){
		scanf("%d ",&a[i]);
	}
	for(i=0;i<t;i++){
		printf("%c",a[i]);
	}
	printf("\n");
}
