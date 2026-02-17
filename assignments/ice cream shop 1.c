#include <stdio.h>
#include<unistd.h>//for sleep fuction to add a second delay to the countdown at the end of the code.
int main(){
// in this code i will practice how to use nested statemetns.

int order = 0 , time = 0;
float cost = 0;
printf("WELCOME TO FIFFI'S ICE CREAM SHOP/nWhat would you like to order?\n");

// i will list the flavours available to be chasen and a place for enquiries.
do{
    int flavour = 0, toppingChoice = 0, size = 0, toppingCount = 0;

    printf("1 - Vanilla\n2 - Strawberry\n3 - Chocolate\n4 - Mango\n5 - Enquiries\n");
    scanf("%d", &flavour);
    // here the user will input the flavour he or she wants

    if(flavour == 5){
        printf("A customer service agent will be with you soon\n");
        
    }
        else if (flavour >= 1 && flavour <= 4){
            if(flavour == 1){
                printf("Flavour  :  Vanilla\n");
            }

            else if (flavour == 2){
                printf("Flavour  :  Strawberry\n");
            }

            else if(flavour == 3){
                printf("Flavour  :  Chocolate\n");
            }

            else if(flavour == 4){
                printf("Flavour  :  Mango\n");
            }
        }
        else{
            printf("Invalid flavour entry\n");
        }
 // this is how the logic works. so if the person chooses five a customer sevice personnel will be brought to the person. if not then the person can choose the flavours in the range of 1 and 4. if the person chooses anything out of that range they will receive an error message ' invalid input'.

    printf("Please choose the size you want\n");
    printf("1 - Small\n2 - Large\n");
    scanf("%d", &size);
    // the user will input the size they want.
   
    if(size <= 0 || size > 2){
        printf("Invalid size entry\n");
    }
        else if(size == 1 && flavour == 1){
            printf("Flavour  : Vanilla\n");
            printf("Size     :  Small\n");
            cost += 5;
            time += 2;
        }

        else if(size == 1 && flavour == 2){
            printf("Flavour  : Strawberry\n");
            printf("Size     :  Small\n");
            cost += 5;
            time += 2;
        }

        else if(size == 1 && flavour == 3){
            printf("Flavour  : Chocolate\n");
            printf("Size     :  Small\n");
            cost += 6;
            time += 2;
        }

        else if(size == 1 && flavour == 4){
            printf("Flavour  :  Mango\n");
            printf("Size     :  Small\n");
            cost += 7;
            time += 2;
        }

        else if(size == 2 && flavour == 1){
            printf("Flavour  :  Vanilla\n");
            printf("Size     :  Large\n");
            cost =+ 8;
            time += 3;
        }

        else if(size == 2 && flavour == 2){
            printf("Flavour  :  Strawberry\n");
            printf("Size     :  Large\n");
            cost += 8;
            time += 3;
        }

        else if(size == 2 && flavour == 3){
            printf("Flavour  :  Chocolate\n");
            printf("Size     :  Large\n");
            cost =+ 9;
            time += 3;
        }

        else if(size == 2 && flavour == 4){
            printf("Flavour  :  Mango\n");
            printf("Size     :  Large\n");
            cost =+ 10;
            time += 3;
        }



 toppingCount = 1;
 do{
     // here i will list the available topping to choose from
     printf("Available toppings\n");
     printf("1 - Sprinkles\n2 - Whipped cream\n3 - Chopped  nuts\n4 - Coconut shavings\n5 - No more toppings\n");
     scanf("%d", &toppingChoice);


     if (toppingChoice >=1 && toppingChoice <= 4){
         if(toppingChoice == 1){
             printf("Topping Choice  :  Sprinkles\n");
             cost += 2;
             time += 1;
            }

         else if(toppingChoice == 2){
             printf("Topping Choice  :  Whipped cream\n");
             cost += 3;
             time += 2;
            }

         else if(toppingChoice == 3){
             printf("Topping Choice  :  Chopped nuts\n");
             cost += 4;
             time += 3;
            }

         else if(toppingChoice == 4){
             printf("Topping Choice  :  Coconut shavings\n");
             cost += 5;
             time += 3;
            }
            toppingCount ++;
        }     
        else if(toppingChoice == 5){
            toppingCount = 0;
        }
        else{
             printf("Invalid topping entry\n");
            }
        
    }while(toppingCount > 0);


    int choice;
    printf("Would you like anything else?\nYes - 1\nNo - 2\n");
    scanf("%d",&choice);
    // the user will decide if they want something else either by choosing yes or no corresponding to 1 and 2 respectively.
    if(choice == 1){
        order ++;
    }
    else{
        order = 0;
        printf("the total cost of your purchase is %.2f GHS.\n", cost);
        printf("The total waiting time is %d minutes\n", time);
    }

}while(order > 0);

printf("Kindly wait for your order.\n");
// now im going to create a countdown applying the time it takes to make the order.

// countdown using a for loop
for(int totalTime = time; totalTime >= 0; totalTime--){
    printf("%d minutes more for your order to be ready\n", totalTime);
    fflush(stdout);
    sleep(1);
}

/*
// count down using a while loop
int countdown = time;
while(countdown >= 0){
    printf("%d minutes more for your order to be ready\n", countdown);
    countdown--;
}
*/
printf("Here is your order\n Thanks for comming to Fiifi's Ice Cream\n");


return 0;
}