
//Finally my very first c program
//Day one of learning C programming language
#include <stdio.h>
#include <stdbool.h>
int main()
{

/*
printf("Hello world!\t");
printf("Have a nice day!\n");
printf("My name is Seli.\n");
printf("I am learning C programming language.\nAnd it is awesome!\n");
printf("C programming is fun!\n\n");
int myAge = 19;
float myCWA = 78.5;
char myGrade = 'A'; 
printf("I am %d years old.\n", myAge); //Displaying age
printf("My current CWA is %.2f.\n", myCWA); //Displaying CWA
printf("My grade in C programming is %c.\n", myGrade); //Displaying grade
printf("I am %d years old, my current CWA is %.2f and my grade in C programming is %c.\n", myAge, myCWA, myGrade); //Displaying all information together
printf("I am %d years old.\n ",19);
int myNum = 35;
int myOtherNum = 23;
myOtherNum = myNum;
printf("%d",myOtherNum);


//Day two of programming in C
int x = 34;
int y = 48;
int sum = x + y;
printf("%d", sum);
int x, y, z;
x = y = z = 50;
printf("%d",x + y + z);

// Student data
int studentID = 15;
int studentAge = 23;
float studentFee = 75.25;
char studentGrade = 'B';

// Print variables
printf("Student id: %d\n", studentID);
printf("Student age: %d\n", studentAge);
printf("Student fee: %.2f\n", studentFee);
printf("Student grade: %c", studentGrade);

//Calculating the area of a circle
int radius = 7;
int pi = 3.14159;

float area = pi * radius * radius;
printf("The area of the circle is %f",area);
//Thats all for day two


//Day three of programming in C
char myText[] = "Hello";
printf("%s\n", myText);
double myNum = 45.7899;
printf ("%lf\n", myNum);

double number = 67e8;//this is 67 * 10^8. use double because its a large number. and also a decimal
printf("%lf", number);
float myFloatNum = 3.5;
double myDoubleNum = 19.99;

printf("%f\n", myFloatNum); 
printf("%lf", myDoubleNum);
//So this is the normal representation of float numbers. it will show all the zero's behind the point. so the set the precision, you have to state the number of decimal points.
printf("%.1f\n", myFloatNum);
printf("%.2lf\n", myDoubleNum);// so this sets the precision for the output in the terminal.
//ps..note to self, dont forget to add the colon--> ;
int myInt;
float myFloat;
double myDouble;
char myChar;

printf("%zu\n", sizeof(myInt));
printf("%zu\n", sizeof(myFloat));
printf("%zu\n", sizeof(myDouble));
printf("%zu\n", sizeof(myChar));//%zu is used to show the size. the size of operator returns the value of type size_t which as an unassigned integer type. so its better to use %zu than %d.


//Day four of programming in C
int number_of_bags = 20;
int cost_per_bag = 400;
float total_cost_of_bags = number_of_bags * cost_per_bag;
char myCurrency[]= "cedis";

printf(" Number of bags sold in December:%d %s \n",number_of_bags, myCurrency);
printf(" Cost per bag:%d %s \n",cost_per_bag, myCurrency);
printf("Total cost of bags:%.2f %s \n",total_cost_of_bags, myCurrency);

//kniwing the size in bytes of the various types of data
printf("Size of int: %zu bytes\n", sizeof(int));
printf("Size of double: %zu bytes\n", sizeof(double));
printf("Size of short int: %zu bytes\n", sizeof(short int));
printf("Size of unsigned int: %zu bytes\n", sizeof(unsigned int));
printf("Size of long int: %zu bytes\n", sizeof(long int));
printf("Size of long long int: %zu bytes\n", sizeof(long long int));
printf("Size of unsigned long long int: %zu bytes\n", sizeof(unsigned long long int));
printf("Size of long double: %zu bytes\n", sizeof(long double));
// but for everyday programming you can just stick to int, char, float and double. its when you need control over size that you use the others.

//Explicit/manual conversion of an int to a float
float division = (float) 5/2;
printf("%f", division);
//So when you use this method, you are able to get the right value of the division, which is a float. if you use int, the editor will print just the whole number and leave the decimals behind.
int sum = 5 / 2;
printf("%d", sum);// the output will be two instead of 2.5
float fraction = 5 / 2;
printf("%f", fraction);// it will still print 2.00000 instead of 2.5

// Set the maximum possible score in the game to 500
int maxScore = 500;

// The actual score of the user
int userScore = 423;

//Calculate the percantage of the user's score in relation to the maximum available score.
//Convert userScore to float to make sure that the division is accurate 
float percentage = (float) userScore / maxScore * 100.0;

// Print the percentage
printf("User's percentage is %.2f", percentage);

const int minutesPerHour = 60;
// this is used for variales that are unlikely to change or variables that we want to remain constant in our code. its good practice to write them in upper case.
const int MINUTESPERHOUR = 60;

//Day five of programming in C
int x = 5;

++x; // Increment x by 1
printf("%d\n", x); // 6
// ++ is used to increase the value of a number by 1

int y = 7;
--y;//decrease y by 1
printf("%d\n",y);
//-- is used to decrease the value of a number my 1

int money_in_my_account = 500000;
char currency[] = "cedis";

//one cedi enters my account every time i edit a picure
money_in_my_account++;
money_in_my_account++;
money_in_my_account++;
//amytime i buy credit one cedi is taken away from my account
money_in_my_account--;
money_in_my_account--;

printf("%d %s \n",money_in_my_account,currency);
int savings = 100; 
savings += 50; // add 50 to savings

printf("Total savings: %d\n", savings);

int x = 5;
int y = 3;
printf("%d\n", x > y); 
printf("%d\n", x ==y);
printf("%d\n", x < y);
printf("%d\n", x < y);
printf("%d\n", x != y);
printf("%d\n", x >= y);
printf("%d\n", x <=y);
//so the outputs of the following will be 1 and 0 1 meaning true and 0 meanig false.

int isLoggedIn = 1;
int isAdmin = 0;

printf("Regular user: %d\n", isLoggedIn && !isAdmin);
printf("Has access: %d\n", isLoggedIn || isAdmin);
printf("Not logged in: %d\n", !isLoggedIn);



//day six in programming in C
//so ive learnt that when using booleans you cant just use something like int or char to set it. its not inbuilt. so you have to add #include <stdbool.h> to the header so ot will work

bool will_i_pass_the_exam = true;
bool will_i_fail_ = false;
printf("%d\n",will_i_pass_the_exam);
printf("%d", will_i_fail_);
//but then booleans are mostly used for comparison.
printf("%d", 10 > 9);  // Returns 1 (true) because 10 is greater than 9

int s = 34;
int u = 67;

printf("%d", s > u);
printf("%d", s == u);
printf("%d", s < u);
printf("%d", s != u);


//day seven of programming in C

int college_of_engineering_cut_off_point = 06;
int cut_off_point_Seli = 06;
int cut_off_point_Amanda = 13;

printf("%d\n",cut_off_point_Amanda <= college_of_engineering_cut_off_point);
printf("%d", cut_off_point_Seli <= college_of_engineering_cut_off_point);
//if the result is 1, it means the person is qualified. if its o then not qualified.
//now were going to use if and else statements.
int myAge = 34;
int VotingAge = 18;

if(myAge>= VotingAge){
    printf("Old enough to vote");
}else{
    printf("Not qualified to vote!");
}
*/
 // day 8 of programming in C

 int my_cwa = 78 ;
 int first_class = 70 ;
 if (my_cwa >= first_class){
    printf("Seli is a first class student");
 }else{
    printf("Seli has to do better");
 }

if (my_cwa >= first_class){
    printf("Seli is a first class student");
}else if (my_cwa < first_class){
    printf ("Seli's CWA is BAD she has to improve");
}else {
    printf("Seli has to do better");
}
// so another way of using if and elsi is by using the shorthand if...else. also known as the ternary operator. so instead ogf going through the whole if else thing..which involves many lines of code just use this.
 
// so with the same example
(my_cwa >= first_class) ? printf("Seli is a first class student") : printf("Seli has to do better.");

return 0;
}