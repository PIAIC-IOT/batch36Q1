#include <stdio.h>
// for linux
#include<stdlib.h>
// for windows
// #include<system.h>

int main () {
    //for linux
    system("clear");
    //for windows 
    // system("cls");
    printf("\n");
    
    for (int number = 0 ; number<=255 ; number++){
        printf("%d \t %c \n",number,number);
    }
}



