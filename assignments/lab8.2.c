#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#define PI 314159265
float *addition(float *sum, float b){
     printf("%2.f + %.2f", * sum,  b);
     *sum = *sum + b;
    printf("Result : %.2f\n",*sum);
    return sum;
}

float *subtraction( float * subtract , float b){
    printf("%2.f - %2.f", *subtract, b);
    *subtract = *subtract - b ;
    printf("Result : %2.f\n", *subtract);
    return subtract;
}

float *multiplication(float * multiply, int b){
    printf("%2.f * %2.f\n", *multiply , b);
    *multiply = *multiply * b ;
    printf("Result : %.2f\n",*multiply);
    return multiply;
}


float *division(float * division, int b){
    if( b == 0){
        printf("Error\n");// security check to prevent the calculator from crashing when i divide by 0
    }
    else{
    printf("%2.f / %2.f\n", *division , b);
    
    *division = *division / b ;
    printf("Result : %.2f\n",*division);
    return division;
    }   
}

int main(){
    float number1;
    float number2;
    float *resultpointer = &number1;
    char choice ;
    bool running = true;
        
    printf("====Welcome to my calculator====\n");
    printf("|Numbers  : 0 1 2 3 4 5 6 7 8 9|\n");
    start:
    printf("|    Enter your first number   |\n");
    scanf("%f",&number1);
    do{   
        printf("\nOperators\nAddition = +\nSubtraction = -\nMultiplication = *\nDivision = /\nExit = #\nReset = @\n");
        scanf(" %c",&choice);
        
        if(choice == '#'){
            printf("Goodbye :(\n");
            running = false;
            break;
        }else if(choice == '@'){
            goto start;
        }

        switch (choice)
        {
        case '+' :
        printf("Enter your second number\n");
        scanf("%f",&number2);
           addition(resultpointer, number2);
            break;
        case '-':
        printf("Enter your second number\n");
        scanf("%f",&number2);
        subtraction(resultpointer, number2);
            break;
        case '*':
        printf("Enter your second number\n");
        scanf("%f",&number2);
        multiplication(resultpointer, number2);
            break;
        case '/':
        printf("Enter your second number\n");
        scanf("%f",&number2);
        division(resultpointer, number2);
            break;
        default:
            printf("Error:( \n");
           goto start;
        }
      
    }while(running);
    return 0;
}
