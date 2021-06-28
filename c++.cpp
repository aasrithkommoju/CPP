#include <stdio.h>
#include <malloc.h>
#include <string.h>
int main(){

     char *mem_allocation;

     mem_allocation = malloc( 20 * sizeof(char) );

     if( mem_allocation== NULL )

     {

        printf("Corporate: \n");

     }

     else

     {

        strcpy( mem_allocation,"Corporate:");

     }

     printf("Campus :%s \n", mem_allocation );

     free(mem_allocation);

}
