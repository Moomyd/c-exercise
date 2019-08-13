/*菜鸟杯随意定义*/
#include<stdio.h>
int IsPrime(int number) {
    int i;
    for (i=2; i<number; i++) {
        if (number % i == 0 && i != number) return 0;
    }
    return 1;
}
int main(){
         	int t;
                scanf("%d",&t);
		while(t--){
			int n;
			scanf("%d",&n);
			if(n>=0){
				printf("YES\n");
			}else{
				printf("NO\n");
			}
			if(IsPrime(n))
				printf("YES\n");
		        else  printf("NO\n");

                       if(n==0)
			       printf("BZD\n");
		       else if(n<0)
			       printf("0\n");
		       else{
			       long long sum=0,i;
			       for(i=1;i*i<=n;i++){
				       if(n%i==0) sum+=2;
			       }
			       printf("%lld\n",sum);
		       }
		}
		return 0;
	}
		    

                       			       




		      
			

		

	
