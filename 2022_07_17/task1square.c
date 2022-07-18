#include <stdio.h>

int main(){
printf("enter rows of the rectangle ");
int rows;
int columns;
scanf("%d", &rows);
printf("enter columns of the shape ");
scanf("%d",&columns);

for (int i=1;i<=rows;i++){
   for(int j=1;j<=columns;j++){
       printf("*");
   }
   printf("\n");
}
return 0;
}

/*
******
******
******
*/