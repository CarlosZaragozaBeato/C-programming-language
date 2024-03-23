
#include <stdio.h>

// int runner (){
//     int count = 0;
//     count ++;
//     return count;
// }

int runner()
{
    static int count = 0;
    count++;
    return count;
}

static void fun(void) {
   printf("I am a static function.");
}

int sum (int sum){
    static int total = 0;
    total += sum;
    return total;
}

int main()
{
    // printf("%d ", runner());
    // printf("%d ", runner());
    
       printf("%d ",sum(55));
       printf("%d ",sum(45));
       printf("%d ",sum(50));
    return 0;
}
