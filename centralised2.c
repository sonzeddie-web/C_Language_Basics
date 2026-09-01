#include <stdio.h>

int main(){

int userID;
int Pin;
int adminOverride;

printf("\nEnter userID and Pin! Otherwise use adminOverride.\n");

printf("\nuserID: ");
scanf("%d", &userID);

printf("\nPin: ");
scanf("%d", &Pin);

printf("adminOverride: ");
scanf("%d", &adminOverride);

if(userID == 101 && Pin == 5555 || adminOverride == 1){

    printf("Access Granted");
}else{
    printf("Access Denied");

}
return 0;
}
