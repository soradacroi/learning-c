#include <stdio.h>

int main(){
    // we define an array of interger like 
    int array[10];
    /* the indexing (idk if its the correct word or not) is like python's like from starting from
     0 to the lenght of the array - 1 which is 9 in this case */  
    // we can then populate it after ( ͡° ͜ʖ ͡°) hehe populate it like this
    array[0] = 10;
    array[1] = 90;
    array[4] = 50;
    // and so on
    printf("in one position - %d, \nin 2nd - %d \nand at 5th - %d\n\n", array[0], array[1], array[4]);

    /************************/
    //multidimentional array
    // type var[x][y][z]...
    int twoDim[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    // btw we dont need the inner brackets if u dont want
    int x[2][3] = {1, 2, 3, 4, 5, 6};
    printf("from twoDim %d \nand from x %d\n\n", twoDim[0][2], x[0][2]);
    int y[3];
    y[0] = 1;
    y[1] = 2;
    // y[2] = 3; we remove this line so we saw that its 0 if we dont put a value
    printf("1 %d 2 %d 3 %d\n", y[0], y[1], y[2]);

    // this is char NOT like str like python
    char z[2][3] = {{'t', 'h', 'e'}, {'c', 'a', 't'}};
    printf("%c%c%c %c%c%c\n", z[0][0], z[0][1], z[0][2], z[1][0], z[1][1], z[1][2]);

    // for str we do (this is all me learning idk if its correct or not if im not correct i will tell in other files)
    /* warning */  
    // char s[2][3] = {"the", "cat"}; this dont work properly because well it dont have the \0 in the last to tell its the last character
    // so \0 is like end of the word which get added at last of every this so we do it like this
    char s[2][4] = {"the", "cat"}; // we change the "3" to a "4" which will now have the \0 at the 4th position
    printf("%s %s", s[0], s[1]);


    return 0;
}