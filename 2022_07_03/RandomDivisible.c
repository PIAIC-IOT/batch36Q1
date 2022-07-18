#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    srand(time(0));
    int randomNum = rand();
    
printf("\n");
    printf("the number is %d ", randomNum);
    printf("\n");
    if(randomNum % 2 == 0){
        printf("the number is divisible by 2");
    }
    else{
        printf("the number is not divisible by 2");
    }
   return 0;
}

