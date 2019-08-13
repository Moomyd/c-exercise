#include<stdio.h>
#include<string.h>
#include<algorithm>
#define max(a,b) (a>b?a:b)
using namespace std;
int dp[1100][1100];
int MAX;

int main(void)
{
    int i,j,n,m,T,x,y;
    scanf("%d",&T);
    while(T--){
	    scanf("%d%d%d%d",&n,&m,&x,&y);
	    MAX=0;
	    memset(dp,0,sizeof(dp));
	    for(i=1;i<=n;i++)
		    for(j=1;j<=m;j++){
			    scanf("%d",&dp[i][j]);
			    dp[i][j]+=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
			    if(i>=x&&j>=y){
				     MAX=max(MAX,dp[i][j]-dp[i][j-y]-dp[i-x][j]+dp[i-x][j-y]);
			    }
		    }
	    printf("%d\n",MAX);
    }
    return 0;
}

