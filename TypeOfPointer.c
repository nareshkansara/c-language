#include <stdio.h>
int main()
{
    int a = 345;
    float b = 8.3;
    void *ptr;
    ptr = &b;
    printf("The value of b is %f\n", *((float *)ptr));
    ptr = &a;
    printf("The value of a is %d\n", *((int *)ptr));
    return 0;
}


// #include <stdio.h>

// int main()
// {
//     int a = 34;
//     int * ptr = NULL;
//     if (ptr != NULL){
//     printf("The address of a is %d\n", ptr);
//     }
//     else{
//         printf("The pointer is a null pointer and cannot be dereferenced");
//     }
//     return 0;
// }


/*

#include <stdio.h>
#include <stdlib.h>

int* functionDangling()
{
    int a, b, sum;
    a =34;
    b = 364;
    sum = a + b;
    return ∑
}

int main()
{
    // Case 1: De allocation of a memory block
    int *ptr= (int *) malloc(7* sizeof(int));
    ptr[0] = 34;
    ptr[1] = 36;
    ptr[2] = 64;
    ptr[3] = 5;
    free(ptr); // ptr is now a dangling pointer

    // Case 2: Function returning local variable address
    int * dangPtr = functionDangling(); // dangPtr is now a dangling pointer

    int * danglingPtr3;
    // Case 3: If a variable goes out of scope
    {
        int a = 12;

        danglingPtr3 = &a;
    }
    // Here variable a goes out of scope which means danglingPtr3 is pointing to a location which is freed and hence danglingPtr3 is now a dangling pointer


    return 0;
}


#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a =4354;
    int *ptr; // This is a wild pointer
    // *ptr = 34; // This is not a good thing to do
    ptr = &a; // ptr is no longer a wild pointer
    printf("The value of a is %d\n", *ptr);
    return 0;
}


*/