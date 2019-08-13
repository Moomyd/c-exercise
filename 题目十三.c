#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		long long a,b,c;
		scanf("%lld %lld %lld",&a,&b,&c);
		printf("case#%d: ",i);
		if(a+b>c)
			printf("true\n");
		else printf("false\n");
	}
	return 0;
}
