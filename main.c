#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int calculate(int option);
int resourceManager(int option);

int main(){
    char choice;
    printf("\t     ,-'-.                                           \n");
    printf("\t   _r-----i          _                                   \n");
    printf("\t  \\      |-.       ,###.                                 \n");
    printf("\t    |     | |    ,-------.                               \n");
    printf("\t    |     | |   c|       |                       ,--.    \n");
    printf("\t    |     |'     |       |      _______________ C|  |    \n");
    printf("\t    (=====)      =========      \\_____________/  `=='    \n");
    printf("\n\n\t\t\t!!! Welcome !!!\n");
    printf("\t\tWhat would you like to have ?\n");
    printf("\t\t\t MENU :\n");
    printf("\t\t\t 1. Regular Tea \t(₹20/-)\n");
    printf("\t\t\t 2. Special Tea \t(₹30/-)\n");
    printf("\t\t\t 3. Ice Tea Tea \t(₹30/-)\n");
    printf("\t\t\t 4. Cappuccino \t(₹50/-)\n");
    printf("\t\t\t 5. Latte \t(₹50/-)\n");
    printf("\t\t\t 6. Espresso \t(₹45/-)\n");
    printf("\t\t\t 7. Cold Milk \t(₹15/-)\n");
    printf("\t\t\t 8. Hot Milk \t(₹20/-)\n");
    printf("\t\t\t 9. Hot Chocolate \t(₹45/-)\n");
    
    //Asking for user option
    int option;
    printf("\t\t\t Enter your choice number: ");
    scanf("%d",&option);

    
    //Asking for Addons
    char response
    printf("Do you want extra Sugar(y/n) :");
    scanf("%c",&response);
    if(response == 'y' || response == 'Y'){
        printf("\n\t\t\t Addons:\n");
        printf("\t\t\t   1.Sugar \t(₹5/-)\n")
    }
    

    // Resources availabe:
    int totalMilk = 20000; // 20000 ml 
    int totalSugar = 5000; // 5000g 
    int coffeePowder = 5000; // 5000 g
    int teaPowder = 5000; // 5000 g
    int chocolate = 2000; // 2000 g

    int totalMoney = 0;
    if(resourceManager(option)){
        totalMoney += calculate(option);
    }
}

int resourceManager(int option){
    continue;
}

