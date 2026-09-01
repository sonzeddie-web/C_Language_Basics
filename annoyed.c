#include <stdio.h>
int main(){

int year;
char name[200];
printf("Enter your name: \n");
fgets(name, sizeof(name), stdin);

printf("Proceed with your birth year: \n");
scanf("%d", &year);

printf("\nDear %s\n You are now %d years old!\n", name,(2026-year));

return 0;
}
