#include<stdio.h>
#include<math.h>
#define PI 314159265
double addition(double a, double b){
    double sum =  a + b;
    return sum;
}

double subtraction(double a , double b){
    return a - b;
}
//unit one to 3. CENG unit 9. current code of ethics for i aaa and ghie
double multiplication(double a, double b){
    return a * b;
}

double division(double a , double b){
    if(b == 0){
        printf("Error\n");
        return 0;
    }
    return a / b;
}

double modulus( double a, double b){
    if(b == 0){
        printf("Error\n");
        return 0;
    }
    return fmod(a, b);
}

double power(double base, double exponent){
    return pow(base, exponent);
}

double squareroot(double a){
    if(a <= 0){
        printf("Error\n");
        return 0;
    }
    return sqrt(a);
}

double sin(double degree){
    double radians = degree * (PI / 180.00);
    return sin(radians);
}

double cos(double degree){
    double radians = degree *(PI / 180.00);
    return cos(radians);
}

double tan(double degree){
    double radians = degree * (PI / 180.00);
    return tan(radians);
}

double logarithm10( double a){
    if(a <= 0){
        printf("Undefined\n");
        return 0;
    }
    return log10(a);
}

double logarithm(double a ){
    if( a <= 0){
        printf("Undefined\n");
        return 0;
    }
    return log(a);
}

int main(){
    printf("Welcome to our calculator\n");
    







    return 0;
}