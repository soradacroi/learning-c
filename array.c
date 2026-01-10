#include <stdio.h>

int main(){
    // we define an array of interger like 
    int array[10];
    /* the indexing (idk if its the correct word or not) is like python's like from starting from
     0 to the lenght of the array - 1 which is 9 in this case */  
    // we can then populate it after ( ͡° ͜ʖ ͡°) hehe populate it like this
    array[1] = 10;
    array[2] = 90;
    array[5] = 50;
    // and so on
    printf("in one position - %d, in 2nd - %d and at 5th - %d", array[1], array[2], array[5]);
    return 0;
}