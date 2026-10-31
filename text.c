#include <stdio.h>


int main()
{

void write();
int count_1();
int count_2();

count_2();

}

void write() 
{
    int c = 0;
    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }
}

int count_1() 
{
    
    long nc = 0;

    while (getchar() != EOF)  {
        ++nc;
        printf("%ld\n", nc);
    }
    return nc;
}

int count_2()
{
    double nc;
    for (nc = 0; getchar() != EOF; ++nc)
    printf("%.0f\n", nc);
}