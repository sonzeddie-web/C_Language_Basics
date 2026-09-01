#include <stdio.h>

int main(){
int nums[] = {12, 34, 17, 11, 59, 23,21};

int i;
int count;
int sum=0;
float average =0;

count= sizeof(nums)/sizeof(nums[0]);
for(i=0; i<count; i++){
sum+=nums[i];
}

average= sum/count;

printf("The average of the numbers is %.3f\n", average);

return 0;

}
