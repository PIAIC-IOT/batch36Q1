#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
srand(time(0));
int randomNum = rand();

printf("\n");

printf("your lucky number is %d ",randomNum );
printf("\n");
   return 0;
}

