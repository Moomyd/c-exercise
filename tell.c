/*菜鸟杯表白题用摩尔斯电码*/
#include<stdio.h>
char str[][10]={
	".-","-...","-.-.","-..",
	".","..-.","--.","....",
	"..",".---","-.-",".-..",
	"--","-.","---",".--.",
	"--.-",".-.","...","-",
	"..-","...-",".--","-..-",
	"-.--","--..","-----",".----",
	"..---","...--","....-",".....",
	"-....","--...","---..","----."
};
int get(char ch){
	if(ch>='a'&&ch<='z')
		return ch-'a';
	else if(ch>='A'&&ch<='Z')
		return ch-'A';
	else
		return 26+ch-'0';
}
char s[10007];
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int n;
		scanf("%d",&n);
		for(int i=0;i<n;++i){
		scanf("%s",s);
		for(int j=0;s[j];j++){
			printf("%s ",str[get(s[j])]);
		
		}
		printf("\n");
	}
	}
	return 0;
	
}
		




