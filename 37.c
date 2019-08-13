#include<stdio.h>
typedef struct list{
	long long num1;
	int num2;
	int num3;
}MYLIST;
int main(){
	MYLIST a[1001];
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
                 scanf("%lld %d %d",&a[i].num1,&a[i].num2,&a[i].num3);
        }
	int M;
	scanf("%d",&M);
	int b[1001];
	for(int j=0;j<M;j++){
		scanf("%d",&b[j]);
	}
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			if(b[i]==a[j].num2){
                              printf("%lld %d\n",a[j].num1,a[j].num3);
			}
		}
	}
	return 0;
}


