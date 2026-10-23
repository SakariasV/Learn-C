#include <stdio.h>

int main() {

    char computerword[30] = "test";
    char gused_letters[50];
    int gusess_count = 0;
    int i;
    int y;

    system("cls");
    printf("The computer is thinking out a good word for you\n");
    for (i = 0; i <= 2; i++)    {

        sleep(1);
        printf(".");
    }
    sleep(3);
    system("cls");

    for (i = 0; computerword[i]; i++){
        printf(" ");
        for (y = 0; gused_letters[y]; i++)  {
            if (gused_letters[y] == computerword[i]){
                printf("%c", computerword[i]);
                break;
        
        printf("_");
        }
        
    }
        

    }

}