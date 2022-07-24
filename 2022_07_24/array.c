#include <stdio.h>
#include <stdlib.h>
int main () {
    //system("cls");  
    int age = 20;
    printf("\n age : %d",age);

    int student_age[4] = {15,19,24,28};
    //index                0  1  2  3
    printf("\nArray \n");

    for (int i =0; i<4; i++){
        printf("\n student %d",i+1);
        printf("\n age is: %d", student_age[i]);
    }




    // printf("\nsudent age 1 : %d",student_age[0]);
    // printf("\nsudent age 2 : %d",student_age[1]);
    // printf("\nsudent age 3 : %d",student_age[2]);
    // printf("\nsudent age 4 : %d",student_age[3]);
    

}