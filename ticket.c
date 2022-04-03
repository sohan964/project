#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    int ticket;
    char phone[100];
    printf("\t\tWelcome to Our Transport express\n\n");
    printf("\nwe have 6 seat available\nThe seat numbers:");
    printf("\t 2\t 4\n\t\t\t 5\t 7\n\t\t\t 9 \t 11");
    printf("\n\n\tIf you want to take\n");

    printf("\nplease enter your name :");
    scanf("%s",&name);
    printf("please enter your phone number :");
    scanf("%s",&phone);
    printf("\nplease choose a ticket:");
    scanf("%d",&ticket);

    switch(ticket)
    {
        case 2:{
                printf("\n\tName: %s\n",name);
                printf("\tPhone: %s\n",phone);
                printf("\tTicket: %d\n",ticket);
                printf("\tThank You!\n");
        } break;
        case 4:{
                printf("\n\tName: %s\n",name);
                printf("\tPhone: %s\n",phone);
                printf("\tTicket: %d\n",tickprintf("\tThank You!");et);
                printf("\tThank You!\n");
        } break;
        case 5:{
                printf("\n\tName: %s\n",name);
                printf("\tPhone: %s\n",phone);
                printf("\tTicket: %d\n",ticket);
                printf("\tThank You!\n");
        } break;
        case 7:{
                printf("\n\tName: %s\n",name);
                printf("\tPhone: %s\n",phone);
                printf("\tTicket: %d\n",ticket);
                printf("\tThank You!\n");
        } break;
        case 9:{
                printf("\n\tName: %s\n",name);
                printf("\tPhone: %s\n",phone);
                printf("\tTicket: %d\n",ticket);
                printf("\tThank You!\n");
        } break;
        case 11:{
                printf("\n\tName: %s\n",name);
                printf("\tPhone: %s\n",phone);
                printf("\tTicket: %d\n",ticket);
                printf("\tThank You!\n");
        } break;

        default:
            printf("\n\tinvalid Ticket number\n");


    }
 return 0;
}
