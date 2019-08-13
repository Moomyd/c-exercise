 #include<stdio.h>
 int main(void)
{
	int n,i,product;
	while(scanf("%d",&n)!=EOF){
		product=1;
		
		while(n--){
			scanf("%d",&i);
			if(i%2==1)
				product*=i;
		}
		printf("%d\n",product);
	}
	return 0;
}
