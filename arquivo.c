#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int valor[10] = {1,0,0,0,0,0,1,1,1,1};
	int i, j,acumulador =0;
   	j =9;
   	for(i=0; i<10;i++){
		   acumulador += valor[i]*(pow(2,j));
		 j = j -1;
	   }
	   printf("%i", acumulador);



	return 0;
}
