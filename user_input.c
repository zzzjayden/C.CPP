#include<stdio.h>



int main(void)
{
    int x; //leave the type you want empty
    int y;
    printf("Your x is: "); // add space for input
    scanf("%d", &x); // this adds into print statement, (No need for the \n)
    printf("Your y is: ");
    scanf("%d", &y);
    int sum = x * y; // put the sum after youre creating the variables
    printf("the product of x and a y is %d\n", sum);
    return 0;


}