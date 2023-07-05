#include <stdio.h>
#include <stdlib.h>

int marks_summation(int* marks, int number_of_students, char gender) {
  
  int b[number_of_students/2];
  int g[number_of_students/2];
  int bi=0,gi=0,bsum=0,gsum=0;
  for(int i=0;i<number_of_students;i++){
      if(i%2==0){
          b[bi++]=marks[i]; //Even Indexed Elements
      }
      else{
          g[gi++]=marks[i]; //Odd Indexed Elements
      }
  }
  
  for(int i=0;i<bi;i++){
      bsum+=b[i]; //Sum Boys Marks
  }
  for(int i=0;i<gi;i++){
      gsum+=g[i];//Sum Girls Marks
  }
  if(gender == 'b'){
      return bsum; //Total marks scored by Boys
  }
  else if (gender == 'g') {
      return gsum; //Total marks scored by Girls
  }
  else {
  return 1; //Terminated Unsuccessfully
  }
  
}

int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students); //Get N 
    int *marks = (int *) malloc(number_of_students * sizeof (int)); //Dynamic Memory Allocation
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student)); //Get N Elements
    }
    
    scanf(" %c", &gender); //Get (b/g)
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}