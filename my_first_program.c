#include<cs50>
#include<stdio.h>


int main(void)
{   string answer = get_string("what is your name?: ");
    printf("Hello World\n");
    printf("This is my first time coding in C\n");
    printf("The goal is to learn everything about C programming before going back to college\n");
    printf("Hello, %s\n" answer);
}