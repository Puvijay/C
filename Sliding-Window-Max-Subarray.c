// This is the Optimal Method for finding Subarrays
#include<stdio.h>
int main(){
	int wsum=0,msum=-1;
	int k=3; // K
	int arr[]={2,3,67,56,24,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<k;i++){
		wsum = wsum + arr[i]; // Adding Sub Array
	}
	for(int i=k;i<n;i++){
		wsum = wsum - arr[i-k] + arr[i]; // Sliding Window Method
		if( wsum > msum){
			msum = wsum; // Updating Maximum Subarray
		}
	}
	printf(" %i",msum); // Display
}