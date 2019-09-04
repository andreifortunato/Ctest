#include<stdio.h>;
#include<math.h>;


   int main()
   {  int x;
   
   printf("\tDê um valor para x menor que 100:/d");
   scanf("%d",&x);
   
   
   for(x = 0; x<=100; x++){
   
  if( x %3 ==0)
      { printf("\t Jovens /n");
      }
  if( x %5 ==0)
      { printf("\t Gênios /n");
      }
  else ( x %3 ==0 && x %5 ==0 )
      { printf("\t Jovens Genios /n");
      }
      }
      printf(" %x Todos os valores:",&x);
      return 0;
      }
