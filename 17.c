#include <cstdio>
#include <cstring>
const int maxn = 1000017;
int p[maxn], a[maxn];
void init()
{
	for(int i = 2; i*i <= maxn; i++)
	{
		if(!a[i])
		{
			for(int j = i; j*i <= maxn; j++)
			{
				a[j*i] = 1;
			}
		}
	}
}
int main()
{
	memset(a,0,sizeof(a));
	int n, m;
	int i;
	init();
	scanf("%d%d",&n,&m);
	int l = 1;
	for(i = 2; i <= maxn; i++)
	{
		if(!a[i])
		{
			p[l++] = i;
		}
	}
	int k = 0;
	for(i = n; i <= m; i++)
	{
		if(k == 0)
			printf("%d",p[i]);
		else
			printf(" %d",p[i]);
		k++;
		if(k == 10 && i != m)
		{
			printf("\n");
			k = 0;
		}
	}
	printf("\n");
	return 0;
}

