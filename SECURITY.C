#include <stdio.h>
int main(){
int userID;
int pin;
int adminOverride;

printf("\nEnter userID: ");
scanf("%d", &userID);

printf("\nEnter pin: ");
scanf("%d", &pin);

printf("\nEnter adminOverride: ");
scanf("%d", &adminOverride);

    if(userID == 101 && pin == 5555 || adminOverride == 1){
        printf("\nAcess Granted");

    }else{
    printf("\nAccess Denied");
    }
printf("\nAccess Granted");}
else(
    Access Denied)

return 0;
}
