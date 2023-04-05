#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct user {
    char phone[50];
    char acc[50];
    char password[50];
    char date_of_birth[10];
    float balance;
}
{
    /* data */
};


int main(){
    struct user usr;
    int deposit = 0;
    int deposit = 0;

    int opt;

    printf("\nWhat do you want to do");
    printf("\n\n1. Register your account");
    printf("\n2. Login to an account ");

    printf("Your choice");
    scanf("%d",&opt);
     while(1){
    if(member_of_the_bank){
        system("cls.clear");
        printf("Enter your account no:\t");
        scanf("%s",usr.ac);
        printf("Enter your phone no:\t");
        scanf("%s",usr.phone);
        printf("Enter your password:\t");
        scanf("%s",usr.password);
        usr.balance = 0;
        strcpy(filename,usr.phone);
        if (fwrite != 0){
        printf("Registration complete");
        } else {
            printf("Registration failed");
        }

    } else {
        printf("\nMenu\n");
        printf("1. Check balance");
        printf("2. Withdraw from bank");
        printf("3. Deposit");
        printf("4. Quit menu");

        printf("Enter an option:");
        printf("%d" &option);
    }
    opt 2;
    if (non_member){
        system("cs.clear");
        printf("Register");
        scanf("%s", register);
        printf("Enter your firstname");
        scanf("%s", firstname);
        printf("Enter your lastname");
        scanf("%s", lastname);
        printf("Enter your e-mail");
        scanf("%s", e-meil);
        
        printf("\nRegistration succssful");
        __is_new_user = 0;
        } else {
           printf("\nMenu\n");
           printf("deposit");
        }
        switch (option){
            case 1:
            printf("Your balance is: %lf\n", balance);
            break;

            case 2:
            printf("Enter the amount to deposit: ");
            scanf("%s", deposit);
            balance += deposit;
            printf("Your new balnce is: %s\n", balance);
        case 3:
        if (balance >= 10000) {
            printf(Enter the bank amount: );
            scanf("%d", bank amount);
            if(bank_amount <= balance) {
                balance -= bank_amount;
                printf("bank amount updated! Your new balance is: %d\n", amount);             }
        } else {
            printf("amount not updated,%d\n");
        } else {
           printf("deposit atleast 10000 fpr bank to be activated.\n");
        }
         break;
           
          case 4:
          printf("Thank you for using our bank.\n");
          exit(0);
          
         default:
         printf("Invalid option, please try again\n");
       
        }
      } 
    return 0;
}
   
