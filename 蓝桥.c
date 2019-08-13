/*蓝桥每周一题3n+1问题*/
#include<stdio.h>
int main(){
	int i,j,n;
	scanf("%d %d",&i,&j);
        int step=0;
        while(n>=i&&n<=j){
                if(n%2==0){
                        n=n/2;
                }
                else{
                        n=(3*n+1)/2;

                }
                step++;
        }
	int x=0;
	int max;
	if(step>x){
		x=step;
		max=x;
		printf("%d %d %d",i,j,max);
		}
	return 0;
	}

		
