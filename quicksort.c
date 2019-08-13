#include<stdio.h>
void quick_sort(int a[],int left,int right){
	int temp;
	if(left>=right)
		return;
	int k=a[left];
	int i=left,j=right;
	while(i!=j){
		while(j>i&&a[j]>=k)
			--j;
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		while(i<j&&a[i]<=k)
			++i;
		temp=a[i];
                a[i]=a[j];
                a[j]=temp;

	}
	quick_sort(a,left,i-1);
	quick_sort(a,i+1,right);
}
int main(){
	int a[1000];
	int i,n;
	scanf("输入%d个数字:",&n);
	printf("\n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("排列前的元素是:\n");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	printf("\n");
	quick_sort(a,0,n-1);
	printf("排列后的元素是:\n");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	printf("\n");
	return 0;
}


