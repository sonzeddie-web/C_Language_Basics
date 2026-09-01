#include <stdio.h>

void function( char name[], int age){

printf("\nDear %s ure now %d years old\n", name, age);
};

int main(){

function("Emma", 20);
function("Jane",22);
function("Abby", 34);

return 0;

}
