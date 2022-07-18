#include <stdio.h>


int main(){
    int age ;    
    printf("Enter your age ");
    scanf("%d",&age);
    printf("\n");

    switch (age) {
        case 50:
          printf("You age is %d ",age);
          break;
        case 40:
          printf("You age is %d ",age)  ;
          break;
        default :
          printf("%d is out of range",age);
    }
    return 0;
    
}




