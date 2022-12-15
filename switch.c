#include<stdio.h>
//Like and if, elseif, else
// only for numbers
int main(void)
{
    int x = 8;
    switch(x){
    case 3:
        printf("Your number is 3\n");
        break;
    case 6:
        printf("Your number is 6\n");
        break;
    case 9:
        printf("Your number is 9\n");
        break;
    default:
        printf("Your number is not here\n");


    }

    return 0;
}
