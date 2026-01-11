// strings

#include <stdio.h>
#include <string.h>
// strings are just array of characters 

char * a = "this is a string"; // doing this can only be used to like read only string we cant modify this

char b[] = "this is how u do for array";

char c[] = "one"; // see this its normal
char d[4] = "one"; /* but when u like define the length you have to add one because when we did array.c we saw that
                     we need to have a \0 at the end to indecate the end of the string */


int main(){
    printf("%s\n", a);
    printf("%s\n", b);
    printf("%s\n", c);
    printf("%s\n", d);

    // string stuff

    // length of a string
    printf("\n%d\n", strlen(d));

    // string comparison
    if (strncmp(c, d, 3) == 0){ // strncmp returns 0 if its equal if not then something other
        printf("its the same string\n");
    }
    else{printf("it is NOT the same string\n");}

    // so this strncat(dest, src, n) will append the first n character of src to dest, n = min(n, len(src))
    char dest[50]="Hello";
    char src[20]="World";
    strncat(dest,src,3);
    printf("%s\n",dest);
    strncat(dest,src,5);
    printf("%s\n",dest);
    

}