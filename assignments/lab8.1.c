#include<stdio.h>
int main(){
int x ;
x = 89;
int * ptrx = &x;
int ** ptrptrx = &ptrx;
printf("x = %d\n",x);
printf("ptrx = %d\n",ptrx);
printf("ptrptrx = %d\n",ptrptrx);

printf("ptrx = %d\n",*ptrx);
printf("ptrptrx = %d\n",**ptrptrx);


    return 0;
}