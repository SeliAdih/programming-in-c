#include<stdio.h>
#include<stdbool.h>
#include<math.h>// this library contains all the mathematical functions.
int main(){
    bool running = true;
    char choice;
    int number1;
    int number2;
    float *resultpointer = &number1;
    // i declared all the variables we will use in the calculator here.
    printf("====Welcome to my calculator====\n");
    printf("|Numbers  : 0 1 2 3 4 5 6 7 8 9|\n");
    start:
    printf("|    Enter your first number   |\n");
    scanf("%f",&number1);
    do{   
        printf("Choose your operator\n");
        printf("Operators\n");
        printf("Addition = +\n");
        printf("Subtraction = -\n");
        printf("Multiplication = *\n");
        printf("Division = /\n");
        printf("Natural logarithm = L\n");
        printf("Logarithm to the base 10 = l\n");
        printf("Modulus = M\n");
        printf("Power = P\n");
        printf("Square root = S\n");
        printf("Sin = s\n");
        printf("Cos = c\n");
        printf("Tan = t\n");
        printf("Exit = #");
        printf("Reset = @");
        // the nenu the user will see so she can choose what operation she want to do.
        // i used letters to represent some of the operands because i did not know and have the symbols they use.
        scanf(" %c",&choice);
        // user chooses the character representing the operation she wants to use.
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
        case 'L' :
        printf("Enter your second number\n");
        scanf("%f",&number2);
           naturallogarithm(resultpointer, number2);
            break;
        case 'l':
        printf("Enter your second number\n");
        scanf("%f",&number2);
        logarithm10(resultpointer, number2);
            break;
        case 'M':
        printf("Enter your second number\n");
        scanf("%f",&number2);
        modulus(resultpointer, number2);
            break;
        case 'P':
        printf("Enter your second number\n");
        scanf("%f",&number2);
        power(resultpointer, number2);
            break;  
        case 'S':
        printf("Enter your second number\n");
        scanf("%f",&number2);
        sqroot(resultpointer, number2);
            break;
        case 's':
        printf("Enter your second number\n");
        scanf("%f",&number2);
        sinn(resultpointer, number2);
            break;
        case 'c' :
        printf("Enter your second number\n");
        scanf("%f",&number2);
           coss(resultpointer, number2);
            break;
        case 't':
        printf("Enter your second number\n");
        scanf("%f",&number2);
        tann(resultpointer, number2);
            break;
        
        default:
            printf("Error:( \n");
           goto start;
        }
      
    }while(running);

    return 0;
}
// if you have any confussion text me.
//Seli Adzo Adih.