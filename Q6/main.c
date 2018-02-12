#include <stdio.h>
#include <stdlib.h>

struct Item
{
    char itemName[20];
    int itemCode;
    float price;
    int QtyInStock;
    int IsHighDemand;
    int SoldToday;

};

struct Item Market[1000];
int top =-1;
void enter()
{
    printf("Enter item name, item code, price, quantity, demand in respective order. Place each value in a new line\n");
    top++;
    scanf(" %[^\n]s", Market[top].itemName);
    scanf("%d %f %d %d",&Market[top].itemCode,&Market[top].price,&Market[top].QtyInStock,&Market[top].IsHighDemand);
    Market[top].SoldToday = 0;
}

void update_price()
{
    int n;
    float f;
    printf("Enter the item code and new price\n");
    scanf("%d %f", &n, &f);
    int i;
    for(i=0;i<=top;i++)
    {
        if(Market[i].itemCode==n)
        {
            Market[i].price=f;
        }
    }
}

void update_stock()
{
    int n;
    int f;
    printf("Enter the item code and new stock\n");
    scanf("%d %d", &n, &f);
    int i;
    for(i=0;i<=top;i++)
    {
        if(Market[i].itemCode==n)
        {
            Market[i].QtyInStock=f;
        }
    }
}

void show_list()
{
    int i;
    for(i=0;i<=top;i++)
    {
        printf("%s %f\n", Market[i].itemName, Market[i].price);
    }
}

void sell_item()
{
    int n,k,i;
    retry:
    printf("Item code of the item to sell and how many units to sell ?\n");
    scanf("%d %d",&n, &k);
    for(i=0;i<=top;i++)
    {
        if(Market[i].itemCode==n)
        {
            if(k>Market[i].QtyInStock)
            {
                printf("Required quantity not available\n");
                goto retry;
            }
            else
                Market[i].QtyInStock-=k;
        }
    }
}
int main()
{
    int n=0;
        printf("Enter you choice\n");
        printf("Press 1 to enter a new item\n");
        printf("Press 2 to update price of an item\n");
        printf("Press 3 to update the stock\n");
        printf("Press 4 to show the price list\n");
        printf("Press 5 to sell an item\n");
        printf("Press 0 to exit\n");
    do
    {

        scanf("%d", &n);
        if(n!=0&&n!=1&&n!=2&&n!=3&&n!=4&&n!=5)
            printf("Invalid Choice. Try again\n");

        switch(n)
        {
            case 1: enter(); break;
            case 2: update_price(); break;
            case 3: update_stock(); break;
            case 4: show_list(); break;
            case 5: sell_item(); break;
        }

        printf("Anything else you want to try? Choose the respective button\n");

    } while(n!=0);
}
