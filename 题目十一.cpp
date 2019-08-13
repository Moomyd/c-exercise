#include<stdio.h>
#include<algorithm>
#define dwe 100002
int a[dwe];
using namespace std;
#include<string.h>
int main(){
	int n,m,i;
	while(scanf("%d %d",&n,&m)!=EOF,n!=0,m!=0){
		memset(a,0,sizeof(a));
		for(i=1;i<=n;i++)
			 scanf("%d",&a[i]);
		sort(a+1,a+1+n);
		if(n<m){
			for(i=n;i>=1;i--){
				printf("%d ",a[i]);
			}
		}
		else{
			for(i=n;m>0;i--,m--){
				if(m==1)
					printf("%d\n",a[i]);
				else
					printf("%d ",a[i]);
			}
		}
	}
	return 0;
}
