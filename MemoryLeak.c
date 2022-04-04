#include <stdlib.h>
void myfunc() 
{ 
   int *ptr = (int *) malloc(sizeof(int)); 
   /* Statements */
   free(ptr); 
   return; 
}