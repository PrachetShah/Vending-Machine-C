#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int calculate (int option, int addon);
int resourceManager (int option, int addon);
void startLogo();
void menuLayout();
void endLogo();

int main ()
{
  startLogo(); // welcome

  menuLayout();

  //Asking for user option
  int option;
  again:
  printf ("\n\t\t\tEnter your choice number : ");
  scanf ("%d", &option);

  if (option > 9 || option < 1)
    {
      printf ("\n\t\t\tInvalid choice! eneter integer from 1 to 9 only !\n");
      goto again;
    }

  //Asking for Addons
  int addon;
  printf ("\n\t\t\tDo you want extra Sugar(Rs. 5/-) (Enter 1 for yes) : ");
  scanf ("%d", &addon);

  int totalMoney = 0;

  if (addon == 1)
    printf ("\n\t\t\tYour order is being processed with extra sugar");
  else
    printf ("\n\t\t\tYour order is being processed");

  printf("\n\t\t\t-----------------------------------------------");

// check if enough resources are available before processing the order
  if (resourceManager (option, addon)) {      
    // calculate bill
    totalMoney = calculate (option, addon);
    int payment, extra;
    printf ("\n\t\t\tBill:\n\t\t\tEnter Rs. %d : ", totalMoney);
    scanf("%d",&payment); // ask for payment
    if (payment > totalMoney)
      printf("\n\t\t\tPlease collect your change : Rs. %d",payment-totalMoney); // return extra change
    while(payment < totalMoney){
      printf("\n\t\t\tYou payed less money! Your payent is : Rs. %d",payment);
      printf("\n\t\t\tEnter Money Rs. %d : ",totalMoney-payment); // ask for more, as less money was payed
      scanf("%d",&extra);
      payment = payment + extra;
      if(payment>totalMoney)
        printf("\n\t\t\tPlease collect your change : Rs. %d",payment-totalMoney); // again return extra change
    }

    printf("\n\t\t\t-----------------------------------------------");

    // for repeated ordering
    int more;
    printf ("\n\n\t\t\tDo you want to order again ? (Enter 1 for yes) : ");
    scanf ("%d", &more);
    if (more == 1)
      goto again;
    else
      goto end;
  }
  // if resource manager returns 0 -> indicating resources out of stock
  else{
      printf("\n\n\t\t\tSorry! Required Ingredients have run out of stock!!!\n\t\t\tThe latest order can't be processed");
      goto end;
  }
end:
    endLogo();
}
// starting ascii text
void startLogo(){
  printf ("\n\n");
  printf ("\t\t         ,--''--.                                             \n");
  printf ("\t\t       _r--------i          _                                    \n");
  printf ("\t\t       \\         |-.      ,###.                                    \n");
  printf ("\t\t        |        | |    ,-------.                                  \n");
  printf ("\t\t        |        | |   c|       |              .----.          \n");
  printf ("\t\t        |        |'     |       |             C|uuuu|         \n");
  printf ("\t\t        |        |      |       |        ______|____|______   \n");
  printf ("\t\t        (========)     ===========       \\________________/    \n\n");

  printf ("\t\t\t \\--------------------------------------------------------------/\n");
  printf ("\t\t\t !   | | |  |  |  |   __         __  __    __ __    __  | | |   ! \n");
  printf ("\t\t\t !   | | |  |  |  |  |__   |    |   |  |  |  |  |  |__  | | |   !\n");
  printf ("\t\t\t !   * * *  |__|__|  |__   |__  |__ |__|  |  |  |  |__  * * *   !\n");
  printf ("\t\t\t /--------------------------------------------------------------\\\n\n");
}

// function for monu card
void menuLayout(){
  // printf ("\n\n\t\t\t!!! Welcome !!!\n");
  printf ("\t\t\tWhat would you like to have ?\n");
  printf ("\n\n\t\t\t\t\t MENU :\n");
  printf ("\t\t\t 1. Regular Tea \tRs. 20/-\n");
  printf ("\t\t\t 2. Special Tea \tRs. 30/-\n");
  printf ("\t\t\t 3. Ice Tea Tea \tRs. 30/-\n");
  printf ("\t\t\t 4. Cappuccino \t\tRs. 50/-\n");
  printf ("\t\t\t 5. Latte \t\tRs. 50/-\n");
  printf ("\t\t\t 6. Espresso \t\tRs. 45/-\n");
  printf ("\t\t\t 7. Cold Milk \t\tRs. 15/-\n");
  printf ("\t\t\t 8. Hot Milk \t\tRs. 20/-\n");
  printf ("\t\t\t 9. Hot Chocolate \tRs. 45/-\n");

}


// function that manages the resources
int resourceManager (int option, int addon){
  int totalMilk = 20000; // 20000 ml 
  int totalSugar = 10000; // 5000 g 
  int coffeePowder = 10000; // 5000 g
  int teaPowder = 10000; // 5000 g
  int chocolate = 10000; // 2000 g
  int milk[10] = { 0, 100, 150, 100, 200, 150, 150, 100, 100, 150 };
  int sugar[10] = { 0, 10, 15, 10, 20, 15, 15, 10, 10, 15 };
  int other[10] = { 0, 10, 15, 10, 20, 15, 15, 10, 10, 15 };
  if (addon == 1) {
    totalSugar = totalSugar - 5 - sugar[option];
  }
  else {
    totalSugar = totalSugar - sugar[option];
  }
  totalMilk = totalMilk - milk[option];
  teaPowder = teaPowder - other[option];
  coffeePowder = teaPowder;
  chocolate = teaPowder;

  if (totalMilk >= 0 && teaPowder >= 0 && coffeePowder >= 0 && chocolate >= 0
      && totalSugar > 0)
      return 1;
  else
      return 0;
}

// function that calculates bill
int calculate (int option, int addon){
  int prices[10] = { 0, 20, 30, 30, 50, 50, 45, 15, 20, 45 }, bill = 0;
  if (addon == 1) {
    bill += 5;
  }
  bill += prices[option];
  return bill;
}

// ending ascii text
void endLogo(){
  printf ("\n\n\n");
  printf ("\t\t\t\t           __  __           \n");
  printf ("\t\t\t\t          |  ||  |           \n");
  printf ("\t\t\t\t          |  ||  |           \n");
  printf ("\t\t\t\t         /   ||   \\         \n");
  printf ("\t\t\t\t        /    ||    \\         \n");
  printf ("\t\t\t\t       |     ||     |         \n");
  printf ("\t\t\t\t       |     ||     |         \n");
  printf ("\t\t\t\t       |     ||     |         \n");
  printf ("\t\t\t\t       /     /\\     \\            \n");
  printf ("\t\t\t\t       =====    =====            \n");
  printf ("\t\t\t\t     ======      ======            \n\n\n");
  
  printf ("\t\t\t     #######  #   #    #    #     #  #   #  \n");
  printf ("\t\t\t        #     #   #   # #   # #   #  #  #   \n");
  printf ("\t\t\t        #     #####  # # #  #  #  #  # #    \n");
  printf ("\t\t\t        #     #   #  #   #  #   # #  #  #   \n");
  printf ("\t\t\t        #     #   #  #   #  #     #  #   #  \n\n");

  printf ("\t\t\t\t     #    #  ####   #   #            \n");
  printf ("\t\t\t\t      #  #  #    #  #   #            \n");
  printf ("\t\t\t\t        #   #    #  #   #            \n");
  printf ("\t\t\t\t       #    #    #  #   #            \n");
  printf ("\t\t\t\t      #      ####    ###            \n");
}
