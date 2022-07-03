#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    srand(time(0));
    int randomNum = rand();
    int remainder = randomNum%6;
    remainder = remainder+1;
printf("\n");
printf("Rolling the dice...");
printf("your lucky number is %d ",remainder );
printf("\n");
   return 0;
}

