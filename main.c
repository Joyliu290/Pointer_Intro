#include <stdio.h>
#include <stdlib.h>

//simple intro to pointers in C
void simple (int *p) {

*p=2;
}

int main()
{
    int x =0;
    int *p=&x;

    simple(&x);

    printf("%d\n", *p);
    printf("%d\n", x); //outputs the same result
    //*p and x both represents the value of x
    //p and &x are the addresses of the variables


    return 0;
}
