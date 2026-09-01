#include <stdio.h>
int main(){
float sum= 0;
int i;
float temp[5];

printf("Enter the five temperatures: \n");
for(i=0; i<5; i++){

    scanf("%f", &temp[i]);

    sum += temp[i];


}

printf("\nThe total temperature is %.1f\n", sum);

return 0;
}
