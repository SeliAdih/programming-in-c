#include<stdio.h>
int main(){
    int number;
    printf("Welcome to my even or odd number checker\n");
    printf("Enter your number\n");
    start:
    if(scanf("%d",&number) != 1){// the scanf will return 1 if it succesfully reads an integer.
        printf("Invalid input. Enter a number\n");
        while(getchar() != '\n');// this tells the code to keep on getting the character exept the new line...this is to remove unanted characters from the scanf so we dont get an infinite loop.
        goto start;
        return 1;
    }
    else if(number % 2 == 0){
        printf("The number %d is even\n",number);
    }else{
        printf("The number %d is odd\n",number);
    }

    return 0;
}