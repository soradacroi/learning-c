#include <stdio.h>

// making a function
void func(){
    printf("yas from function one\n");
    // you can do anything u want here
    // in place of void u can do anything like int char and all
    // void == returns nothing
}

void func_two(int a); // you can define it first and do the implemation later
// and parameter is by also assigning it to the type

int main(){
    func(); // call it later
    func_two(10);
}

void func_two(int a){
    printf("printing from function two the number given is %d\n", a);
}