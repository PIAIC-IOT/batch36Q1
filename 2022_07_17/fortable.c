#include <stdio.h>
int main (){
    int num=0;
printf("table program\n enter table number");
    scanf("%d",&num);
    //declare
    for (int counter=0    ;  counter<11    ;counter++)
    //   initialize  condition  increment
    {
        printf("%d multiply by ", num);
        printf("%d = ", counter);
        printf("%d \n", num * counter);

        //printf("\n %d multiply by %d = %d",num,counter, num*counter);
    }
    
    printf("\n\n outside loop Line of code %d",num);
    
    printf("\n \n Out of Loop \n");

    return 0;

}