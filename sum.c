#include <stdio.h>

void calculatesum(){

int x;
int y;
int sum =0;

printf("Enter x: \n");
scanf("%d", &x);

printf("Enter y: \n");
scanf("%d", &y);

sum = x+y;

printf("The sum of x and y is %d", sum);
};

int main(){

calculatesum();


return 0;
}
