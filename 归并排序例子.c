/*迭代版*/
int min(int x, int y) {
	return x < y ? x : y;
}
void merge_sort(int arr[], int len) {
	int* a = arr;
	int* b = (int*) malloc(len * sizeof(int));/*定义一个int类型的指数变量b，并申请len*sizeof(int)个字节的存储空间，malloc在c语言中是一个申请内存单元的函数*/
	int seg, start;
	for (seg = 1; seg < len; seg += seg) {
		for (start = 0; start < len; start += seg + seg) /*赋值语句从右向左进行*/{
			int low = start, mid = min(start + seg, len), high = min(start + seg + seg, len);/*将序列中n个元素分为三部分*/
			int k = low;
			int start1 = low, end1 = mid;
			int start2 = mid, end2 = high;
			while (start1 < end1 && start2 < end2)
				b[k++] = a[start1] < a[start2] ? a[start1++] : a[start2++];/*比较放进b中的两个数哪个更大，并将小数放在前面*/
			while (start1 < end1)
				b[k++] = a[start1++];
			while (start2 < end2)
				b[k++] = a[start2++];/*依次从low和Mid中选取两个数放在b数组中*/
		}
		int* temp = a;
		a = b;
		b = temp;
	}
	if (a != arr) {
		int i;
		for (i = 0; i < len; i++)
			b[i] = a[i];
		b = a;
	}
	free(b);
}
