
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

void gotoxy(int x, int y) 
{ 
    COORD coord;
    coord.X = x; 
    coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{   
   system("cls"); //for windows
//    system("clear"); // for macbook & Linux

   gotoxy(1, 5);
   //      x  y
   printf("Welcome at Col 1, Line 5.");
   gotoxy(10, 10);
   printf("Enter your age : ");
   gotoxy(19, 19);
   printf("End");
    int data = 0;
    gotoxy(27, 10);
    scanf("%d",&data);
   gotoxy(10, 3);
   printf("Your age is : %d",data);


 gotoxy(20, 20);
   printf("Dead End");
   return 0;
}

