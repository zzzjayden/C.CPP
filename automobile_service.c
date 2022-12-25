#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
    int number;
    int oil_change = 35;
    int car_wash = 10;
    int tire_rotation = 19;
    int choice;
    printf("Our Services: \n 1 Car Wash: $10\n 2 Oil change: $35\n 3 Tire Rotation: $19\n\n");
    printf("Which number of service would you like?\n\n");
    printf("You have chosen: ");
    scanf("%d", &number);
    
    if (number == 1)
        printf("You have chosen Car wash\nThat will cost you %d dollars.\n", car_wash);
    else if (number == 2)
        printf("You have chosen Oil Change\nThat will cost you %d dollars.\n", oil_change);
    else if (number == 3)
        printf("You have chosen Tire rotation\nThat will cost %d dollars.\n", tire_rotation);
    else
        printf("You did not choose any of the choices");

    printf("Would you like a second service? Answer with 1=Yes/2=No: ");
    scanf("%d", &choice);
    if (choice == 1){
        int number2;
        printf("Choose the number of your second service: \n");
        printf("You have chosen: ");
        scanf("%d", &number2);
        

        if (number2 == 1)
            printf("You have chosen Car wash\nThat will cost you %d dollars.\n", car_wash);
        else if (number2 == 2)
            printf("You have chosen Oil Change\nThat will cost you %d dollars.\n", oil_change);
        else if (number2 == 3)
            printf("You have chosen Tire rotation\nThat will cost %d dollars.\n", tire_rotation);
        else
            printf("You did not choose any of the choices\n");
    }else{
        printf("You have chosen No\n");
    }



    return 0;
}
