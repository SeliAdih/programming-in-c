#include<stdio.h>
int main(){
  
    
  // int number = 1;
  // int multiply = 1;
   int result;
//do {
  // result = number* multiply;
    //printf("%d * %d = %d\n",number,multiply,result);



//}while(multiply--);
   for( int number = 1;number <= 12;number ++){
        for(int multiply = 1; multiply <=12;multiply++){
        printf("%d * %d = %d\n",number,multiply,number* multiply);
        
        }
    printf("\n");
    }

    return 0;
}
