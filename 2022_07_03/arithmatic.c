#include <stdio.h>
// #include <conio.h>
int main ()
{
    // clrscr();
    int physics,english;
    // int english;

    printf("Marksheet Program\n");
    printf("\nEnter English Marks : ");
    scanf("%d",&english);
    printf("\nEnter Physics Numbers : ");
    scanf("%d",&physics);

    printf("\n\nYour English marks are : %d\n",english);
    printf("Your Physics marks are : %d\n",physics);
    int obtianed = english + physics;
    printf("Your Obtained marks are : %d\n",obtianed);
    float percent = obtianed / 200.0 * 100.0;
    printf("Your Percentage is : %.2f\n",percent);



    
}





