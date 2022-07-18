#include <stdio.h>


int main(){
    int age ;
    printf("Enter your age ");
    scanf("%d",&age);
    printf("\n");

    if(age>60){
       printf("You are Very old \n");
    }
    else if(age>40) {
        printf("You are old \n");
    } 
    else if(age>20) {
        printf("You are Young \n");
    }
    else if(age>12) {
        printf("You are Teenage \n");
    }
    else {
        printf("You are Child \n");
    }

    return 0;
}