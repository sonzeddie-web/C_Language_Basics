#include <stdio.h>
int main(){

int year;
char name[100];

printf("\nEnter your name: ");
fgets(name, sizeof(name), stdin);

printf("\nProceed with your birth year: ");
scanf("%d", &year);

printf("\n\nDear %s\n You are now %d years old!\n", name,(2026-year));

return 0;
}
