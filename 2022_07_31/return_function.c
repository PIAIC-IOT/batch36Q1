#include <stdio.h>

int return_num() {
    int num=0;
    printf("\nwe are in return function");
    printf("\nEnter any number : ");
    scanf("%d",&num);
    printf("\nreturn function ends");
    return num;
}

 int main () {
    printf("\nStart of  main function");
    int receive_number =  return_num(); 
    printf("\nwe are in main function");
    printf("\nwe received %d",receive_number);
    
    // return_num(); 
    
    printf("\n2nd time we received %d",return_num());
return 0;

}