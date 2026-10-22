#include <stdio.h>


float z;
float add(float x,float y);
float subtract(float x,float y);
float multiply(float x,float y);
float divide(float x,float y);

int main()  {

    float firstnumber;
    float secondnumber;
    float getbacknumber;
    int option;

    while (1)   {
    system("cls");
    printf("First number:\n");
    scanf("%f", &firstnumber);
    
    
    system("cls");
    printf("Second number:\n");
    scanf("%f", &secondnumber);
    
    
    system("cls");
    printf("What do you want to do with them?\n1)Add\n2)subtract\n3)multiply\n4)divide\n");
    scanf("%d", &option);

    if (option == 1) {
        getbacknumber = add(firstnumber,secondnumber);
        system("cls");
        printf("You get back %f\n",getbacknumber);
    } else if (option == 2) {
        getbacknumber = subtract(firstnumber,secondnumber);
        system("cls");
        printf("You get back %f\n",getbacknumber);
    } else if (option == 3) {
        getbacknumber = multiply(firstnumber,secondnumber);
        system("cls");
        printf("You get back %f\n",getbacknumber);
    } else if (option == 4) {
        getbacknumber = divide(firstnumber,secondnumber);
        system("cls");
        printf("You get back %f\n",getbacknumber);
    } else {
        system("cls");
        printf("somthing went wrong");
    }
    sleep(2);
    }
}

float add(float x,float y) {
    z = x + y;
    return z;
}
float subtract(float x,float y) {
    z = x - y;
    return z;
}
float multiply(float x,float y) {
    z = x * y;
    return z;
}
float divide(float x,float y) {
    z = x / y;
    return z;
}