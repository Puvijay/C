#include<stdio.h>
int main(){
	int sum=0,max=-10,start=-1,end=-1;
	int arr[]={-1,-2,-3,-4};
	int n= sizeof(arr)/sizeof(arr[0]);
	
	printf("Given Array : ");
	for(int l=0;l<n;l++){
		printf(" %i",arr[l]);
	}
	
	for(int i=0;i<n;i++){
		
		if(sum==0){
			start =i ;
		}
		sum+=arr[i];
		if(sum>max){
			max=sum;
			end=i;
		}
		if(sum<0){
			sum =0 ;
		}
	}
	printf("\nThe Max Sub array in the given array : ");
	for(int i=start;i<=end;i++){
		printf(" %i",arr[i]);
	}
	printf("\nSum : %i",max);
	return 0;
}
