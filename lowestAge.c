#include <stdio.h>

int main(){

int i;
 int age[] = {12,4,5,76,98,1,34};

 int lowest = age[0];
 int length = sizeof(age)/sizeof(age[0]);

 for(i=0; i<length; i++){

 if(lowest> age[i]){

 lowest = age[i];

 }
 }
  printf("\nThe lowest age is %d!\n", lowest);
 return 0;
}
