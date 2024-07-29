#include <stdio.h>
void main() {
    int choice,total=0,quan,Final_amount=0,last_amount;
    char ch;
    do {
        printf("---------------Menu---------------\n");
        printf("\n1.pizza          price = 180rs/pcs");
        printf("\n2.burger         price = 100rs/pcs");
        printf("\n3.dosa           price = 120rs/pcs");
        printf("\n4.idli           price = 50rs/pcs ");
        printf("\nEnter the choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("\nyou have selected pizza ");
                printf("\nEnter the quan: ");
                scanf("%d", &quan);
                total = quan * 180;
                printf("\nTotal amount :%d", total);
                Final_amount = total + Final_amount;
                printf("\nAmount :%d", Final_amount);
                last_amount= Final_amount;
                break;
            case 2:
                printf("\nyou have selected Burger ");
                printf("\nEnter the quan: ");
                scanf("%d", &quan);
                total = quan * 100;
                printf("\nTotal amount :%d", total);
                Final_amount = total + Final_amount;
                printf("\nAmount :%d", Final_amount);
                last_amount = Final_amount;
                break;
            case 3:
                printf("\nyou have selected dosa ");
                printf("\nEnter the quan: ");
                scanf("%d", &quan);
                total = quan * 120;
                printf("\nTotal amount :%d", total);
                Final_amount = total + Final_amount;
                printf("\nAmount :%d", Final_amount);
                last_amount = Final_amount;
                break;
            case 4:
                printf("\nyou have selected Idali ");
                printf("\nEnter the quan: ");
                scanf("%d", &quan);
                total = quan * 50;
                printf("\nTotal amount :%d", total);
                Final_amount = total + Final_amount;
                printf("\nAmount :%d", Final_amount);
                last_amount = Final_amount;
                break;
            default:
                printf("Invalid choice!\n");
                continue;
        }
        printf("\nDo you want place more order?: y & n ");
        scanf(" %c", &ch);
    } while (ch == 'y' || ch == 'Y');
    printf("Total amount: %d\n", last_amount);
}

