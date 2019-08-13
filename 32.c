/*换个格式输出整数*/
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int b,s,g;
	b=n/100;
	s=n%100/10;
	g=n%10;
	int i;
        for (i=0; i<b; i++){
                    printf("B");
	} 
    for (i=0; i<s; i++){
        printf("S");
    }
    // 个位 
    for (i=0; i<g; i++){
        printf("%d", i+1);
    }
    
    return 0;
}
