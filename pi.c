#include<stdio.h>
#include<math.h>
int main(){
        int n;
        float delta,x,pi,t;
        
        n=1;
        pi=1.0;
        x=3.0;
	t=1.0;
       
        while(fabs(t)>=1e-6){
                n=-n;
		t=n/x;
                pi=pi+t;
                x=x+2.0;
            
        }
	pi*=4;
        printf("pi is %f\n",pi);

        return 0;
}
        

