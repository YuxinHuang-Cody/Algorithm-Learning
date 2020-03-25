//快速排序 分治思想
void quickSort(int[] a, int low, int high){
	if(low < high){
		//枢纽元素两边排序
		int pivotPos = partition(a, low, high);
		quickSort(a, low, pivotPos - 1);
		quickSort(a, pivotPos + 1, high);
	}
}
//返回枢纽元素位置
int partition(int[] a, int low, int high){
	int pivotVal = a[low];
	//最终状态是low=high
	while(low < high){
		//从右到左遍历，找到一个小于枢纽元素的值
		while(a[high] > pivotVal && low < high) high--;
			a[low] = a[high];
		while(a[low] < pivotVal && low < high) low++;
			a[high] = a[low];
	}
	//a[high]也可以
	a[low] = pivotVal;
	return low;
}
