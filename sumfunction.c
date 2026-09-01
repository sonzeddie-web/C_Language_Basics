#include <stdio.h>

int sum(int x, int y){

return x + y;
}

int main(){

int array[4];

array[0] = sum(4, 5);
array[1] = sum(5, 1);
array[2] = sum(0, 1);
array[3] = sum(9, 11);

for(int j=0; j<4; j++){

    printf("%d\n", array[j]);
}
return 0;
}
