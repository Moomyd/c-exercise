#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int real,imaginary;
	float module;
	float radius=0;
	while(n--){
		scanf("%d %d",&real,&imaginary);
		module=sqrt(real*real+imaginary*imaginary);
		if(module>radius){
			radius=module;
		}
	}
	printf("%0.2f\n",radius);
	return 0;
}
