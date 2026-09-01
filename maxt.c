#include <stdio.h>
int main(){
 int nums[5];

 //loop to fill array
 for (int i= 0; i<5; i++){
    nums[i] = (i+1)*10;

 }
 //print array
 for(int i = 0; i<5; i++){

    printf("%d\n", nums[i]);
 }


return 0;
}


