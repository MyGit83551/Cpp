#include<stdio.h>

struct Date
{
    int dd;
    int mm;
    int yyyy;

};
void initDate(struct Date* ptrDate)
{
ptrDate->dd=19;
ptrDate->mm=03;
ptrDate->yyyy=2024;

}
void printDateOnConsole(struct Date* ptrDate)
{
    printf("Date is : %d-%d-%d\n", ptrDate->dd,ptrDate->mm,ptrDate->yyyy);
}
void acceptDateFromConsole(struct Date* ptrDate)
{
    printf("Enter Day, Month, Year:");
    scanf("%d %d %d", &ptrDate->dd, &ptrDate->mm, &ptrDate->yyyy);
}

int main()
{
    int choice;
    
    struct Date d1;
    initDate(&d1);
    do
    {
        
        printf("0. Exit\n");
        printf("1. initDate\n");
        printf("2. Accept Date\n");
        printf("3. Print Date\n");
        printf("Enter your choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            printf("Thank you for using app...");
            break;
        case 1:
            initDate(&d1);
            break;
        case 2:
            acceptDateFromConsole(&d1); 
            break;
        case 3:
            printDateOnConsole(&d1);
            break;
        default:
            printf("Wrong Choice...");
            break;
        }
    } while (choice != 3);
    return 0;
}
