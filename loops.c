#include <stdio.h>

int main(){
    int i = 0;
    /****** for loops ******/

    for (i; i < 10; i++){
        printf("%d\n", i);
    }
    printf("printing out side of loop i is %d\n", i);
    // we can also iterate on arrays
    int array[3] = {2,4,6}; 
    for (i; i < 13; i++){
        printf("%d, ", array[i-10]);
    }

    printf("\n");
    printf("\n");
    /****** while loops ******/

    int n = 0;
    while (n < 10) {
        n++;
        printf("%d ", n);
    }

    // for infinite loop you can do :-
    /* while(x){
        where x is a not 0 thing which will always give true } */
    
    return 0;
}

// we have loop directives like "break" and "continue"