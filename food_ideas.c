#include <stdio.h>


// TODO add random seed that makes it so you dont need to enter a number to get food ideas



int main()  {

    char breakfest[6][15] = {"Boiled eggs", "sandwitch", "cereal", "scrambeld eggs", "Yoghurt" ,"Just skip it"};
    char lunch[10][15] = {"Chicken korrai", "hamburger", "nudels", "pasta", "salmond", "kebab", "pizza", "chicken madras", "chicken vindalo", "pancakes"};
    char dinner[10][15] = {"kebab", "chicken korrai", "hashbrowns", "salad", "pizza", "chicken madras", "lasagna", "waffles", "sandwitch", "pasta"};

    int count;
    int breakfest_count;
    int lunch_count;
    int dinner_count;

    int i;

    printf("Write a number bettwen 0 and 500 to diceide what to eat today\n");
    scanf("%i", &count);



    breakfest_count = count / 100;
    printf("\nFor breakfest you get %s\n", breakfest[breakfest_count]);


    lunch_count = count / 10;
    lunch_count = lunch_count - breakfest_count * 10;
    printf("\nFor lunch you get %s\n", lunch[lunch_count]);


    dinner_count = count - breakfest_count * 100;
    dinner_count = dinner_count - lunch_count * 10;
    printf("\nFor dinner you get %s\n", dinner[dinner_count]);

    for (i = 0 ; i < 3 ; i++)   {
        printf("\n");
    }
}

