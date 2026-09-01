#include <stdio.h>

int main(){

int ages[]= {23, 19, 30, 27, 16, 2};

int length = sizeof(ages)/sizeof(ages[0]);
int lowest = ages[0];

for(int i=0; i<length; i++){

if(lowest> ages[i]){

lowest= ages[i];

}

}

printf("The lowest age is %d ",lowest);


return 0;
}
