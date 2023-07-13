#include<stdio.h>
int main(){
	int arr[]={2,2,2,3,3,3,4,4,4,5,5,5,6}; //Input
	int n= sizeof(arr)/sizeof(arr[0]); //Size of Array
	int l=1; // Left initilize to the 2nd element in the array  
	for(int i=1;i<n;i++){ // Index starts from 1
		if(arr[i]!=arr[i-1]){ // Index  not equal to previous 
			arr[l]=arr[i]; // Put Right into Left index
			l++; //Iterate Left position 
		}
	}
	for(int i=0;i<l;i++){ //  l -> total unique elements (size of array after removing dup elements)
		printf(" %i",arr[i]); //Output : 2,3,4,5,6
	}
}