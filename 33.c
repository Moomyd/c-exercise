/*跟奥马巴一起编程*/
#include <stdio.h>
int main() {
	int n;
	char ch;
	scanf("%d %c", &n, &ch);
	for(int i = 0; i < (n + 1) / 2; ++i) {
		for(int j = 0; j < n; ++j)
			if(i == 0 || i == (n - 1) / 2)		//第一行和最后一行输出整行的符号
				printf("%c", ch);
			else
				if(j == 0 || j == n - 1)	//其它行只输出第一个和最后一个符号
					printf("%c", ch);
				else
					printf(" ");
		printf("\n");
	}

	return 0;
}

