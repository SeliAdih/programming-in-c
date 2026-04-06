#include<stdio.h>
float temperature(float a){
   float temp = (a * 1.8)+ 32; 
   printf("The weather in farenheit is %.2f farenheit\n",temp);
   return temp;
}

int main(){
// in this program i am going to ask for a user input for the temperature in celcius and convert it to farenheit.
float celcius;
printf("Welcome to my program. Enter the weather in your town in degree celcius\n");
scanf("%f",&celcius);

 temperature( celcius);


    return 0;
}