//out 1
// in 1 2 3 4 5 6 7 8 9 10
// out 2
// in 1 2 3 4 5 6 7 8 9 10
// out 3
// in 1 2 3 4 5 6 7 8 9 10
// out 4
// in 1 2 3 4 5 6 7 8 9 10


#include <stdio.h>
int main () {

    for (int out=0; out <=5;out ++)
    {
        printf ("\nout %d \n",out);
        int in=0 ;
        printf ("inside ");
        while (in<20){
            printf ("%d ",in);
            in ++;
        }
    }
}



