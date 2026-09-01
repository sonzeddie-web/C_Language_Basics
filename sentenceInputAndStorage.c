#include <stdio.h>
#include <string.h>

int main(){

char intro[100];

printf("\nIntroduce yourself!\n");
fgets(intro, sizeof(intro), stdin);

printf("\nHE said;\n \"%s\" \n", intro);

return 0;
}
