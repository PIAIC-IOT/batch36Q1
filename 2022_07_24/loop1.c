#include <stdio.h>
#include <stdlib.h>

int main () {
int choice=0;
do {
    system("cls");
    
    for (int col=1; col<=78;col++) {
        printf("*");
    }

int current_reading=0;
int prevoius_reading=0;
bool check=true;

    do {
    
        system("cls");
        printf("\nEnter your Previous meter reading : ");
        scanf("%d",&prevoius_reading);
    
        printf("Enter your Current meter reading : ");
        scanf("%d",&current_reading);

    } while (current_reading == 0 || prevoius_reading==0);


    int unit=current_reading - prevoius_reading ;
    int bill= unit * 25;
    int imf= bill * 0.10;
    int meter_rent = 150;
    int total=bill+imf+meter_rent;

    printf("\nUnits Consumed: %d", unit);
    printf("\nYour Bill is: %d", bill);
    printf("\nIMF Charges: %d", imf);
    printf("\nMeter Rent: %d", meter_rent);
    printf("\nTotal to be paid: %d", total);

    printf("\n");

    for (int col=1; col<=78;col++) {
        printf("*");
    }

 printf("\nDo you want to generate anoth Bill ? ");
 printf("\nPress 1 for continue... ");
 scanf("%d",&choice);
 printf("\n");

 } while (choice==1 );
 
 printf("Thank you using our application ");

}
