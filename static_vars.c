#include <stdio.h>

// variables can be declared as static to increase their scope up to file containing them
int func() {
    static int count = 0;
    count++;
    return count;
}

// if we declare a function with static the scope of that function is reduced to the file containing it, its not global
static void func_two(void) {
   printf("static function\n");
}

int main()
{
    printf("%d ", func());
    printf("%d\n", func());
    func_two();
    return 0;
}
