#include <stdio.h>

int main() {

    void start_print();
    void print_word(char* computerword,char* gused_letters);

    int check_win(char* computerword, char* gused_letters);

    // TODO
    // add so the computer picks a random
    // word from a list off words

    char computerword[30] = "test";
    char gused_letters[50];
    char guess[1];
    
    
    int i;
    int y;

    int allowed_guesses = 10;
    int gusess_count = 0;
    int win_status;




    start_print();

    while (1) {
        win_status = check_win(computerword, gused_letters);
        if (win_status == 1) {
            system("cls");
            printf("You win");
            sleep(5);
            break;
        
        } else if (gusess_count > allowed_guesses) {
            game_ended(computerword);
            break;
        } else  {
            print_word(computerword, gused_letters);
            
            // TODO
            // add so you can see what words you have guessed
            
            //sleep(1);
            //printf("\n");
            //for (i = 0; gused_letters[i]; i++) {
            //    printf("%c", gused_letters[i]);
            //    printf(" ");
            //}
            printf("\n");
            sleep(1);
            printf("\n\nWhats youre guess:\n");
            scanf("%c", &guess);
            system("cls");
            strncat(gused_letters,guess,3);
            // TODO
            // add so the guess count only goes upp if you guess wrong
            gusess_count++;
        }
    }
}


void game_ended(char* computerword)   {
    int i;
    
    system("cls");
    printf("Sory to tell you but you lost\n");
    sleep(1);
    printf("\nthe word was: ");
    for (i = 0; i < strlen(computerword); i++)  {
        printf("%c",computerword[i]);
    }
    sleep(10);
    system("cls");
}


void start_print()  {
    int i;

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
    printf("\n");
}


int check_win(char* computerword, char* gused_letters)  {
    
    int i;
    int y;
    int count = 0;
    int getback;

    for (i = 0 ; computerword[i] ; i++) {
        for (y = 0 ; gused_letters[y] ; y++)    {
            if (computerword[i] == gused_letters[y]) {
                count++;
            }

        }
    }
    if (count >= strlen(computerword)) {
        return 1;
    } else {

        return 0;
    }
}