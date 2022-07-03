#include <stdio.h>
int main (){
    int age = 28;
    printf("Age is %d \n",age);
    
    // int age[5];

    int salary[5]={200,300,100,50,500};
    //index         0   1   2   3  4
    printf("Salary of 0 index is %d \n",salary[0]);
    printf("Salary of 1 index is %d \n",salary[1]);
    printf("Salary of 4 index is %d \n",salary[4]);
    //Garbage
    printf("Salary of 15 index is %d \n",salary[15]);
}