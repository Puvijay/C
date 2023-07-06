/* I have used static integer type array because the memory which are allocated for the array elements will be deallocated when the function (tom) gets executed , 
so we can't access the elements in the main function as there are no elements in the address space where the pointer variable (jerry) pointing to */

#include<stdio.h>
#define max 5

int *tom(){
	static int arr[max]; //Static -> To store the elements in data segment for pointer access
	
	int i; //Loop variable
	
	printf("Enter %i Elements : ",max);
	
	while(i<max){
		scanf("%i",&arr[i]); //Get Elements
		i++;
	}
	
	return arr;
}
int main(){
	int *jerry; //Pointer variable
	
	jerry=tom(); //Calling Tom
	
	for(int i=0;i<max;i++){
		printf(" %i",*(jerry+i)); //Printing arr elements in main()
	}
	
	return 0; //Executed successfully
}

