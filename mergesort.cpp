
void merge(int l, int mid, int r, int[] arr){
	
	vector<int>temp;
	int i = 0, j = mid+1;
	
	while(i <= mid && j <= r){

		if(arr[i] <= arr[j])
			temp.push_back(arr[i++]);
		
		else
			temp.push_back(arr[j++]);
	}

	while(i <= mid)
		temp.push_back(arr[i++]);

	while(j <= r)
		temp.push_back(arr[j++]);
	
	for(i=0, j=l; j<=r; i++, j++)
		arr[j] = temp[i];
}

void merge_sort(int l, int r, int[] arr){
	
	int mid = (l+r) >> 1;
	merge_sort(l, mid, arr);
	merge_sort(mid+1, r, arr);

	merge(l, mid, r, arr);
}
