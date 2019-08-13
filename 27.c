/*最大报销额度*/
#include<stdio.h>
char ch;
int main(){
	double Q;
	int N;
	scanf("%lf %d",&Q,&N);
	while(N--){
		int m;
		scanf("%d",&m);
		double sum=0.00;
		while(m--){
			double v;
			scanf("%c:%lf",&ch,&v);
			sum+=v;
		}
		if(sum<=Q)
                    printf("%lf\n",sum);

	}
	return 0;
}
		



