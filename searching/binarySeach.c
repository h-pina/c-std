int binarySearch(int* sortedArr,int search, int left, int right){
	if (right > left){
		int mid = left + (right - left)/2;

		if(sortedArr[mid] == search)
			return mid;

		if (search < sortedArr[mid])
			return binarySearch(sortedArr, search, left, mid-1);

		return binarySearch(sortedArr, search, mid+1,right);
	}
	return -1;
}


int main(int argc, char *argv[]) {
	

	int arr[] = {0,1,2,3,5,8,9,10,23};
	int len = sizeof(arr)/sizeof(int);
	int pos = binarySearch(arr, 9, 0, len-1);
	return 0;
}



