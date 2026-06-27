#include <stdio.h>

int main(){
    int age = 445;
    if(age>100){
        printf("We are inside if\n");
        printf("your age is greater than 90\n");
    }
    
    if(age%5==0){
        printf("We are inside if\n");
        printf("Your age is greater than 10\n");
        printf("Your age is divisible by 50\n");
    }
    else{
        printf("Your age is not greater than 100");
    }
    return 0;
}