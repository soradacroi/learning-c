#include <stdio.h>

// if is used for condition just like english yay

int main() {
    int a = 2;
    int b = 3;
    if (a > b){
        printf("a is bigger then b\n");
    }
    if (a < b){
        printf("b is bigger then a\n");
    }

    // for equal to we use "==" not "="
    if (a == 2){
        printf("a is = 2\n");
    }

    // we got else too
    if (b == 20){
        printf("b is = 20\n");
    }
    else{
        printf("b not equal to 20\n");
    }

    // mm then else if statements too
    if (a > 20){
        printf("a is > 20\n");
    }
    else if (a == 2){
        printf("a is equal to 2\n");
    }
    else{
        printf("a is something\n");
    }
    
    // we use && for AND
    // || for OR 
    // ! for NOT
    if (a < b && a == 2 || b == 3 && b != 20){
        printf("true\n");
    }
    else{
        printf("false\n");
    }

    
    return 0;
}