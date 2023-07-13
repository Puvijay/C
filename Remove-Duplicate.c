#include<stdio.h>
int main(){
	int arr[]={2,3,4,4,5,2,6,3};  // Input
	
	int size=sizeof(arr)/sizeof(arr[0]);
	
	printf("Before : ");
	
	for(int i=0;i<size;i++){
		
		printf(" %i",arr[i]);
	}
	for(int i=0;i<size-1;i++){
		
		for(int j=i+1;j<size;j++){
			
			if(arr[i] == arr[j]){
				
				for(int k=j;k<size;k++){
					
					arr[k]=arr[k+1];
				}
				size--;
				j--;
			}
		}
	}
	printf("\n After:");
	
	for(int i=0;i<size;i++){
		
		printf(" %i",arr[i]);   // Output : 2 3 4 5 6 
	}
}