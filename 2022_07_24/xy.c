//0334 3075120

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

   gotoxy(0, 18);
   //      x  y
   printf("gotoxy jumps to cursor position x18 y15.");
   gotoxy(10, 5);
   printf("Enter your age : ");
   gotoxy(2, 10);
   printf("gotoxy jumps to cursor position x2 y10.");
    int data = 0;
    gotoxy(26, 5);
    scanf("%d",&data);
  gotoxy(19, 19);
   printf("End");

   return 0;
}

