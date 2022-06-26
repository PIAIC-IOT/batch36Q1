#include <stdio.h>
int main () {
    char name[20];
    printf("Enter your Name : ");
    // scanf("%s",&name);
    fgets(name,sizeof(name),stdin);
    
    printf("your name is %s\n",name);
    
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);
    printf("your age is %d\n",age);
    printf("pointer of age variable is %p\n",&age);

    


    //LOC
}