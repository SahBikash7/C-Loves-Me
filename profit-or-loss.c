    // If cost price and selling price of an item is input through the keyboard,WAP to determine whether the seller has made profit or incured loss.Also calculate his profit or loss..

    #include<stdio.h>
    int main(){
        int cost_price,selling_price;
        printf("Enter The Cost Price of The Item: ");
        scanf("%d",&cost_price);
        printf("Enter The Selling Price of The Item: ");
        scanf("%d",&selling_price);
        if(cost_price>selling_price){
            printf("The Seller has incured a loss of %d.\n",(cost_price-selling_price));
        }
        else if(cost_price==selling_price){
            printf("The seller has neither made any profit nor incured any loss.\n");
        }
        else{
            printf("The Seller has made a profit of %d.\n",(selling_price-cost_price)); 
        }
        return 0;
    }