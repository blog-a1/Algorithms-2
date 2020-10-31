bool binary_search(int[] arr, int target){

	int l = 0, r = sizeof(arr)/sizeof(int) - 1, mid;

	while(l <= r){
		mid = (l+r)/2;

		if(target == arr[mid])
			return true;

		if(target < arr[mid])
			r = mid - 1;

		else
			l = mid + 1;
	}

	return false;
}
