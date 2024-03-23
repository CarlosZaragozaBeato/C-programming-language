
#include <stdio.h>

// int foo (int bar){
//     return bar * 2;
// }

int foo (int bar);

// void moo(char *message) {
//     printf("the message is: %s\n", message);
// }

void print_big(int number);

int main()
{
    // int data = foo(2);
    // printf("%d",data);

    // printf("The value of foo is %d", foo(1));
    // moo("Hello, world!");

    int array[] = {1,11,2,22,3,33};
    int i ;
    for (i = 0; i<6; i++){
        print_big(array[i]);
    }
    return 0;
}
void print_big(int number){
    if (number > 10) {
        printf("%d is big\n", number);
    }
}

// int foo(int bar){
//     return bar + 1 ;
// }
