#include <stdio.h>
int main () {
    // for (num=0    ;  num<10    ;++num)
    //   initialize   condition  increment
    
    int num =0;
    //initialize   
    
    while (num <10) {
        //condition    

        printf("inside loop %d \n",num);
        
        num ++;
        // increment
    }

    printf("outside loop");
    
}