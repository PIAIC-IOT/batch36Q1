#include <stdio.h>
int main () {
    int num1 = 33;
    int num2 = 4;
    int div = num1/num2;
    int rem = num1%num2;
    printf("\n %d dividied by %d is %d \n",num1,num2,div);
    printf("\n %d dividied by %d remainder is %d \n",num1,num2,rem);

    printf("\n Value of num1 Before %d\n",num1);
    num1 = num1 + 1;

    printf("\n Value of num1 After1 %d\n",num1);
    int num3 = num1++;
    printf("\n Value of num1 14 line %d\n",num1);
    printf("\n Value of num3 14 line %d\n",num3);
    int num4 = ++num1;

    printf("\n Value of num1 17 line %d\n",num1);
    printf("\n Value of num4 17 line %d\n",num4);

}
