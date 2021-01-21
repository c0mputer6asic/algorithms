#include<stdio.h>

int Max(int *arr, int length){
	int i;
	int r = 0;
	for(i=0; i<length-1; i++){
		if(arr[i]>arr[i+1]){
			r = arr[i];
		}
	}
	return r;
}

void bucket_sort(int *arr, int len, int *res, int res_len){
	int i;
	for(i=0; i<len; i++){
		res[arr[i]] += 1;
	}
}


int main(int argc, char* argv[]){
	int arr[6] = {1, 2, 3, 5, 4, 7};
	int max = Max(arr, 6);
	int res[8];
	bucket_sort(arr, 6, res, max+1);
	return 0;
}
