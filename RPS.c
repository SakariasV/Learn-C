#include <stdio.h>
#include <ctype.h>

#include <stdlib.h>
#include <time.h>

int main()  {


    int input;
    int random;
    int temp;
    int pcpick;
    int realpick;

    system("cls");
    printf("1) Rock\n2) paper\n3) scissors\n");
    scanf("%d", &input);
    
    system("cls");


    //TODO computer only likes picking rock

    
    srand(time(NULL));
    random = rand();
    temp = random / 10;
    temp = temp * 10;
    pcpick = random - temp;


    if (0 <= pcpick < 3)  {
        printf("Computer picked rock\n");
        realpick = 1;
    } else if (3 <= pcpick < 6) {
        printf("Computer picked paper\n");
        realpick = 2;
    }   else {
        printf("Computer picked scissors\n");
        realpick = 3;
    }

    if (input == 1) {
        switch (realpick) {
            case 1:
            printf("Tie");
            break;
            case 2:
            printf("You lose");
            break;
            case 3:
            printf("You win");
            break;
        }

        

    }   else if (input == 2)  {
        switch (realpick) {
            case 1:
            printf("You win");
            break;
            case 2:
            printf("Tie");
            break;
            case 3:
            printf("You lose");
        }


    }   else if (input == 3){
        switch (realpick) {
            case 1:
            printf("You lose");
            break;
            case 2:
            printf("You win");
            break;
            case 3:
            printf("Tie");
            break;
        }

    } 


}
