#include <stdio.h>



int main()
{
        
    // char * name = "John";
    
    // int a = 1;
    
    // int * pointer_to_a = &a;
    
    // printf("The value a is %d\n", a);
    // printf("The value of a is also %d\n", *pointer_to_a);
    
    
    // int a = 1;
    // int  * pointer_to_a = &a;
    // a+= 1;
    // *pointer_to_a += 5;
    
    // printf("The value a is %d\n", a);
    // printf("The value of a is also %d\n", *pointer_to_a);
    int n = 10;
    int * pointer_to_n = &n;
    
    *pointer_to_n += 1;
    
    if (pointer_to_n != &n){
        return 1;
    }
    if (*pointer_to_n != 11){
        return 1;
    }
    printf("Done!\n");
    
    
    
    
    return 0;
}
