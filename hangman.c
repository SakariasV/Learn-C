#include <stdio.h>

int main() {

    void start_print();
    void print_word(char* computerword,char* gused_letters);

    char computerword[30] = "test";
    char gused_letters[50] = "provet";

    int i;
    int y;

    printf("test1");
    int gusess_count = 0;
    void start_print();

    //print_word(char computerword,char gused_letters);
}


void start_print()  {
    int i;
    int y;
    printf("test2");
    system("cls");
    printf("The computer is thinking out a good word for you\n");
    for (i = 0; i <= 2; i++)    {

        sleep(1);
        printf(".");
    }
    sleep(3);
    system("cls");
}






void print_word(char* computerword,char* gused_letters)   {
    int i;
    int y;

    for (i = 0; i < strlen(computerword); i++){
        printf(" ");
        for (y = 0; y < strlen(gused_letters); y++)  {
            if (gused_letters[y] == computerword[i]){
                printf("%c", computerword[i]);
                break;
            }   else if (y == strlen(gused_letters) - 1)   {
                printf("_");
            }   
        }
    }
}