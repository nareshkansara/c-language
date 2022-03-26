#include <stdio.h>
int main()
{

    // nested If-else
    int a;
    printf("Enter either 0 or 1 ");
    scanf("%d", &a);
    if (a == 1)
    {
        printf("Number 1 is entered!");
    }
    else
    {
        if (a == 0)
        {
            printf("Number 0 is entered");
        }
        else
        {
            printf("Wrong Input");
        }
    }

    int num;
    printf("Enter a number less than 10 ");
    scanf("%d", &num);
    if (num <= 10)
    {
        printf("Number is less than 10");
    }
    else
    {
        printf("Number is greater than 10");
    }
    return 0;
}

// Syntax
/*if ( condition ){
statements;}
else {
statements;
}
 */