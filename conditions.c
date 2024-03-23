#include <stdio.h>

int main()
{
    
    int target = 10;
    
    if (target == 10){
        printf("TARGET EQUAL 10\n");
    }
    
    
    int foo = 1;
    int bar = 2;
    
    if (foo<bar){
        printf("foo is smaller than bar.\n");
    }
    if (bar<foo){
        printf("bar is smaller than foo\n");
    }  
    
    
    
    int foo2 = 105;
    int bar2 = 102;
    
    if (foo2>bar2){
        printf("FOO2\n");
    }else if (bar2>foo2){
        printf("BAAR2\n");
    }else{
        printf("EQUAL\n");
    }
    
    
    
    int peanuts_eaten = 22;
    int peanuts_in_jar = 100;
    int max_peanut_limit = 50;
    
    if (peanuts_in_jar > 80){
        if (peanuts_eaten < max_peanut_limit) {
            printf("EAT!!\n");
        }
    }else {
        if (peanuts_eaten > peanuts_in_jar) {
            printf("NO MORE \n");
        }else{
            printf("ONE MORE \n");
        }
    }
    
    int foo3 = 1;
    int bar3 = 2;
    int moo3 = 3;
    
    if (foo3 < bar3 && moo3 > bar3){
        printf("foo is smaller than bar AND moo is larger than bar.\n");
    }
    
    if (foo3 < bar3 || moo3 > bar3) {
        printf("foo is smaller than bar OR moo is larger than bar.\n");
    }
    
    int target2 = 9;
    
    if (target2 != 10) {
        printf("Target is not equal to 10\n");
    }
    
    guessNumber(500);
    guessNumber(600);
    guessNumber(555);
    
    return 0 ;
    
}

void guessNumber(int number) {
    if (number < 500){
        printf("too low\n");
    }
    else if (number > 555){
        printf("too high\n");
    }else{
        printf("correct\n");
    }
    
}


