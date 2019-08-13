#include<stdio.h>
int gcd(int a,int b){
	if(b==0){
		return a;
	}
	else{
		return gcd(b,a%b);
	}
}
int main(){
	int a,b,c;
	while(scanf("%d,%d",&a,&b)!=EOF){
		c=gcd(a,b);
		printf("%d\n",a*b/c);
	}
	return 0;
}
