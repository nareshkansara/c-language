
#include <stdio.h>

int main()
{

    // do while loop
    int num, index = 0;
    printf("Enter a number\n");
    scanf("%d", &num);
    do
    {
        printf("%d\n", index + 1);
        index = index + 1;
    } while (index < num);




    // for loop
    {
        int num1 = 10;
        int i;
        for (i = 0; i < num1; i++)
        {
            printf("%d ", i);
        }

        return 0;
    }
}


    // syntax of do while loop
    /*
    do {
       statements );
    }
    while( test condition );
    */

    // syntax of for  loop
    /*
    for ( initialize counter ; test counter ; increment/decrement counter)
     {
     //set of statements
     }
    */