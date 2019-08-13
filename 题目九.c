#include<stdio.h>
#include<string.h>
int isRuiNian(int y){
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int i,j;
	if((y%400==0)||(y%4==0&&y%100!=0)){
		month[1]+=1;
	}
	
}
int main(){
	int y,m,d;
	scanf("%d/%d/%d",&y,&m,&d);
	int i,j;
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};

	j=0;
        for(i=1;i<m;i++){
                j+=month[i];
        }
        j+=d;
	printf("%d\n",j);
        return j;
}
