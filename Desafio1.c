#include <stdio.h>
#include <stdlib.h>

int main()
{ int x;
  int i; 
   printf("\tDê um valor para x:/d");
   scanf("%i",&x);
   
   
   for(i = 0; i<=x; x++){
   
  if( i %3 ==0)
      { printf("\t %i Jovens /n",&i);
      }
  if( i %5 ==0)
      { printf("\t %i Gênios /n",&i);
      }
   
   x=i+1;
}
  
  printf("\t %x Todos: /n",&x);
  	
  return 0 ;
}

