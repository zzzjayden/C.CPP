#include<stdio.h>

// int main(void){
//     int x = 18;
//     int y = 19;
// if (x > y){
//     printf("x is greater than y\n");
// }else {
//     printf("y ix greater than x\n");
// }
//     return 0;
// }


// int main(void){ // a lot less brackets, alsmost none, start and beginning that is it. 
//     int x = 0;
//     if (x > 0)
//         printf("the number is positive\n");
//     else if (x < 0)
//         printf("The number is negative\n");
//     else
//         printf("The number is 0\n");
//     return 0;
// }


// make a if else if else statement to calculate a grade
int main (void){
    float my_grade = 87.6;
    if (my_grade >= 87.6)
        printf("You have an A\n");
    else if(my_grade >= 77.6)
        printf("You have a B\n");
    else if (my_grade >= 76.6)
        printf("You have a C\n");
    else
        printf("You have failed my course.\n");
    return 0;
    
}
