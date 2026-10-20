#include <stdio.h>


int z;
int add(int x,int y);
int subtract(int x,int y);
int multiply(int x,int y);
int divide(int x,int y);

int main()  {

    float firstnumber;
    float secondnumber;
    int getbacknumber;
    int option;

    while (1)   {
    system("cls");
    printf("First number:\n");
    scanf("%d", &firstnumber);
    
    
    system("cls");
    printf("Second number:\n");
    scanf("%d", &secondnumber);
    
    
    system("cls");
    printf("What do you want to do with them?\n1)Add\n2)subtract\n3)multiply\n4)divide\n");
    scanf("%d", &option);

    if (option == 1) {
        getbacknumber = add(firstnumber,secondnumber);
        system("cls");
        printf("You get back %d\n",getbacknumber);
    } else if (option == 2) {
        getbacknumber = subtract(firstnumber,secondnumber);
        system("cls");
        printf("You get back %d\n",getbacknumber);
    } else if (option == 3) {
        getbacknumber = multiply(firstnumber,secondnumber);
        system("cls");
        printf("You get back %d\n",getbacknumber);
    } else if (option == 4) {
        getbacknumber = divide(firstnumber,secondnumber);
        system("cls");
        printf("You get back %d\n",getbacknumber);
    } else {
        system("cls");
        printf("somthing went wrong");
    }
    sleep(2);
    }
}

int add(int x,int y) {
    z = x + y;
    return z;
}
int subtract(int x,int y) {
    z = x - y;
    return z;
}
int multiply(int x,int y) {
    z = x * y;
    return z;
}
int divide(int x,int y) {
    z = x / y;
    return z;
}