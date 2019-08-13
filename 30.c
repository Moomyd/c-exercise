#include<stdio.h>
int get(int n,int x){
	int mid;
	int res=0;
	while(n>0){
		mid=n%10;
		if(mid==x){
	              res=res*10+mid;
		}
		n/=10;
	}
	return res;
}
int main(){
	 int a,b,Da,Db;
         scanf("%d %d %d %d", &a, &Da, &b, &Db);
         printf("%d", get(a, Da) + get(b, Db));
}
