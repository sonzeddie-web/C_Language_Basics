#include <stdio.h>
int main(){
 int readings[5] = {22, 25, 19,30,24};

 int MaxTemp = readings[0];
 int length = sizeof(readings)/sizeof(readings[0]);
 for(int i=0; i<length; i++){

    if(MaxTemp <readings[i]){

 MaxTemp = readings[i];
 }
 }
printf("\nThe maximum temperature is %d", MaxTemp);

return 0;
}
