#include <stdio.h>

int main(){
    int a=9; int b=9;
    printf("The value of a and b is %d\n", a&&b);
    printf("The value of a or b is %d\n", a||b);
    printf("The value of not(a) is %d\n", !a);

    if (a && b){
        printf("both are true\n");
    }
    // is same as writting ...
    if (a){
        if(b){
            printf("both are true");
        }
    }

    return 0;
}