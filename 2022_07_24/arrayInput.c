#include <stdio.h>
#include <stdlib.h>
int main () {
    system("cls");  
    int student_age[4] ;

    printf("\nArray \n");

    for (int i =0; i<4; i++){
        printf("Enter student %d age ",i+1);
        scanf("%d", &student_age[i]);
    }

  printf("\n Your data is printed below");

    for (int i =0; i<4; i++){
        printf("\n student %d",i+1);
        printf(" age is: %d", student_age[i]);
    }   
}