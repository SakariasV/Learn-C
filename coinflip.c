#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {


    srand(time(NULL));

    int i;
    
    int r = rand();
    if (r % 2 == 1){
        printf("Tails\n");
    } else {
        printf("Head\n");
    }
}