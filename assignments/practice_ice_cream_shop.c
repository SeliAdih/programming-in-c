# include <stdio.h>
#include  <unistd.h>
    int main()
    {
int order , time ;
time = 0;
order = 0;
// initialising time and order to zero

printf("WELCOME TO FIIFI'S ICE CREAM SHOP\nWhat would you like to order?\n");
do{
int flavour , topping , size ;
flavour = 0;
topping = 0;
size = 0;
// initialise thevariables to zero

printf("1 - Vanilla\n2 - Strawberry\n3 - Chocolate\n4 - Mango\n5 - Enquiries\n");
printf("Which flavour do you want?\n");
scanf("%d", &flavour);
// the user will input the favour that they want
if(flavour == 5){
    printf("A customer service agent will be with you soon\n");
}


printf("What size do you want?\n");
printf("1 - small\n2 - large\n");
scanf("%d",&size);

float cost = 0;
     if(flavour >=1 && flavour <= 4){
        // this is for the case where the user selects the small size ie; 1
        if(size == 1 && flavour == 1){
            printf("Size    : Small\n");
            printf("Flavour : Vanilla\n");
            cost += 5;
            time += 2;
        }
        else if(size == 1 && flavour == 2){
            printf("Size    : Small\n");
            printf("Flavour : Strawberry\n");
            cost += 5;
            time += 2;
        }
        else if(size == 1 && flavour == 3){
            printf("Size    : Small\n");
            printf("Flavour : Chocolate\n");
            cost += 6;
            time += 2;
        }
        else if(size == 1 && flavour == 4){
            printf("Size    : Small\n");
            printf("Flavour : Mango\n");
            cost += 7;
            time += 2;
        }

        // this is for the case where the user selects the large size ie; 2
        else if(size == 2 && flavour == 1){
            printf("Size    : Large\n");
            printf("Flavour : Vanilla\n");
            cost += 8;
            time += 3;
        }
        else if(size == 2 && flavour == 2){
            printf("Size    : Large\n");
            printf("Flavour : Strawberry\n");
            cost += 8;
            time += 3;
        }
        else if(size == 2 && flavour == 3){
            printf("Size    : Large\n"); 
            printf("Flavour : Chocolate\n");
            cost += 9;
            time += 3;
        }
        else if(size == 2 && flavour == 4){
            printf("Size    : Large\n");
            printf("Flavour : Mango\n");
            cost += 10;
            time += 3;
        }   
    }else{
        printf("Invalid size entry\n");
    }
    int toppings = 0;
    do{
        printf("What topping do you want?\n");
        printf("1 - Sprinkles\n2 - Whipped cream\n3 - Chopped nuts\n4 - Coconut shavings\n");
        scanf("%d",&topping);// here the user will input the topping they want

       

        if(topping >= 1 && topping <=4){
            if(topping == 1){
                printf("Topping : Sprinkles\n");
                cost += 2;
                time += 1;
            }
            else if(topping == 2){
                printf("Topping : Whipped cream\n");
                cost += 3;
                time += 2;
            }
            else if(topping == 3){
                printf("Topping : Chopped nuts\n");
                cost += 4;
                time += 3;
            }
            else if(topping == 4){
                printf("Toping : Coconut shavings\n");
                cost += 5;
                time += 3;
            }
        }
        toppings += 1;
        if(topping == 5){
            toppings = 0;
        }else{
            printf("Invalid topping entry\n");
        }
    }while(toppings > 0);

    int choice;
      printf("Would you like anything else?\n");
      printf("Yes - 1\nNo - 2\n");
      scanf("%d",&choice);
      if(choice == 1){
        order += 1;
      }else{
        order = 0;
        printf("Total cost of your order is %.2f\n", cost);
        printf("The total waiting time is %d\n", time);
      }
      

}while( order > 0);




for(int waitTime = time; waitTime >= 0; waitTime--){
printf("%d minutes more for your order to be ready\n", waitTime);
fflush(stdout);
sleep(1);
 }
printf("Here is your order\nThanks for comming to Fiifi's Ice cream");

return 0;
}
// researcch on using arrays to do this lab.