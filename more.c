#include <stdio.h>
int calculatediff(int x, int y){

int diff = x - y;
return diff;

}

int main(){
int x;
int y;
int diff;

printf("Enter x and y\n");

printf("\nx: ");
scanf("%d",&x);

printf("\ny: ");
scanf("%d",&y);

diff= calculatediff(x,y);
printf("\n\nThe difference of x and y is %d\n", diff);

return 0;

}


