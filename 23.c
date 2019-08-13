#include<stdio.h>
#include<string.h>
int main()
{
	char num[10000];
	int result[10]={0};
	int i;
	scanf("%s",num);
	for(i=0;i<strlen(num);i++)
	{
		result[(int)(num[i]-'0')]++;
	}
	for(i=0;i<10;i++)
	{
		if(result[i]!=0)
			printf("%d:%d\n",i,result[i]);
	}
	return 0;
} 

