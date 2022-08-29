
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
   
   printf("gotoxy jumps to cursor position x18 y0.");
   gotoxy(10, 5);
   //      y  x
   printf("Enter your age : ");
   gotoxy(2, 10);
   //      y  x
   printf("gotoxy jumps to cursor position y2 x10.");
    int data = 0;
    gotoxy(26, 5);
        //  y  x
    scanf("%d",&data);
  gotoxy(19, 19);
   printf("End");

   return 0;
}

