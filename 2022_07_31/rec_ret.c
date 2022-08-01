#include <stdio.h>

float tea (float order) 
{
    printf("\n");
    printf("\nReccipe for %.1f cup of Tea",order);
    printf("\nWater %.1f cup",order/2);
    printf("\nTea %.1f Tea Spoon",order/2);
    printf("\nMilk %.1f Cup",order/2);
    printf("\nSugar %.1f Tea Spoon",order);
    printf("\nMix all, Heat untill boiling point and boil for 10 minute");
    printf("\nTea is Ready");
    float bill = order * 60;
    return bill;
}

int main () {
    printf("\nWelcome from main");
    printf("\n Enter required Cup of Tea : ");
    float cup=0;
    scanf("%f",&cup);
    float bill = tea(cup);  
    printf("\n Your bill for %.1f cups is %.1f : ",cup,bill);
}

