# include <stdio.h>
int main(){
    
    printf("Choose between yes(y) or no(n)\n");
    char choice = getchar();
    putchar(choice);
    /*
    //scenario 2 using scanf
    char choice[40];
    printf("Choose between yes or no\n");
    scanf("%39s",&choice);
    printf("your choice : %s\n",choice);
     */
    printf("\nInput your scores\n");
     float score_1 , score_2 , score_3 ;
     scanf("%f%f%f",&score_1,&score_2,&score_3);
    printf("Score 1 : %.2f\n",score_1);
    printf("Score 2 : %.2f\n",score_2);
    printf("Score 3 : %.2f\n",score_3);

    return 0;
}