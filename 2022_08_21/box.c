//0334 3075120

#include<stdio.h>
#include<windows.h>

void gotoxy(int x, int y) 
{ 
    COORD coord;
    coord.X = x; 
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{   
   system("cls");
   for (int a = 10;a<=80;a++) {
    gotoxy(a, 5);
    printf("%c",205);
    gotoxy(a, 9);
    printf("%c",205);
    gotoxy(a, 13);
    printf("%c",205);
   }

   for (int a = 5;a<=13;a++) {
    gotoxy(10, a);
    printf("%c",186 );
    gotoxy(55, a);
    printf("%c",186 );
    gotoxy(80, a);
    printf("%c",186);
   }

    gotoxy(10,5 );
    printf("%c",201);
    
    gotoxy(10,9 );
    printf("%c",204);

    gotoxy(10,13 );
    printf("%c",200);


    gotoxy(80,5 );
    printf("%c",187);
    
    gotoxy(80,9 );
    printf("%c",185);

    gotoxy(80,13 );
    printf("%c",188);

    gotoxy(55,5 );
    printf("%c",203);
    
    gotoxy(55,9 );
    printf("%c",206);

    gotoxy(55,13 );
    printf("%c",202);

    gotoxy(13,7 );
    printf("Enter Previous Meter Reading : 200");
    gotoxy(59,7 );
    printf("Enter Current Meter Reading : 300");
    
    gotoxy(13,11 );
    printf("Unit Consumed : 100");
    gotoxy(59,11 );
    printf("Your Bill : 2500");
   
   gotoxy(20, 20);
   printf("Done");
 
   return 0;
}

