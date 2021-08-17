#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int calculate(int option,int addon);
int resourceManager(int option);

int main(){
    // Resources availabe:
    int totalMilk = 20000; // 20000 ml 
    int totalSugar = 5000; // 5000g 
    int coffeePowder = 5000; // 5000 g
    int teaPowder = 5000; // 5000 g
    int chocolate = 2000; // 2000 g

    int totalMoney = 0;
    printf("\t     ,-'-.                                           \n");
    printf("\t   _r-----i          _                                   \n");
    printf("\t   \\      |-.      ,###.                                 \n");
    printf("\t    |     | |    ,-------.                               \n");
    printf("\t    |     | |   c|       |                       ,--.    \n");
    printf("\t    |     |'     |       |      _______________ C|  |    \n");
    printf("\t    (=====)      =========      \\_____________/  `=='    \n");
    printf("\n\n\t\t\t!!! Welcome !!!\n");
    printf("\t\t\tWhat would you like to have ?\n");
    printf("\n\n\t\t\t\t MENU :\n");
    printf("\t\t\t 1. Regular Tea \tRs. 20/-\n");
    printf("\t\t\t 2. Special Tea \tRs. 30/-\n");
    printf("\t\t\t 3. Ice Tea Tea \tRs. 30/-\n");
    printf("\t\t\t 4. Cappuccino \t\tRs. 50/-\n");
    printf("\t\t\t 5. Latte \t\tRs. 50/-\n");
    printf("\t\t\t 6. Espresso \t\tRs. 45/-\n");
    printf("\t\t\t 7. Cold Milk \t\tRs. 15/-\n");
    printf("\t\t\t 8. Hot Milk \t\tRs. 20/-\n");
    printf("\t\t\t 9. Hot Chocolate \tRs. 45/-\n");
    
    //Asking for user option
    int option;
    again:
    printf("\n\t\t\t Enter your choice number: ");
    scanf("%d",&option);

    if (option>9 || option<1) {
        printf("\nInvalid choice! eneter integer from 1 to 9 only !\n");
        goto again;
    }       
    
    //Asking for Addons
    int addon;
    printf("\n\t\t\tDo you want extra Sugar(Rs. 5/-) (Enter 1 for yes) :");
    scanf("%d",&addon);
    
    // if(resourceManager(option)){
    //     totalMoney += calculate(option);
    // }

    // printf("Enter Rs. %d");
    if(addon==1)
        printf("\n\t\t\tYour order is being processed with extra sugar");
    else
        printf("\n\t\t\tYour order is being processed");
}

// int resourceManager(int option){
//     continue;
// }

int calculate(int option, int addon){
    int prices[10]= {0,20,30,30,50,50,45,15,20,45};
    
}
