#include<stdio.h>
int main(){
/*
int num1 = 0, num2 = 1;
int fab = num1 + num2;
int fab2;
printf("%d\n",fab);
num1 = fab ;
 fab2 = num1 + num2;
 printf("%d\n",fab2);
*///for a much simpler approach
int n = 20, num1 = 0, num2 = 1, next_term;
printf("A fibonacci sequence\n");
for (int i = 1; i <= n; i++){
    printf("%d\n", num1);
    next_term = num1 + num2;
    num1 = num2;
    num2 = next_term;
}

    return 0;
}