// if cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred lass. Also determine how much profile he made or loss he incurred.
#include <stdio.h>
int main() {
    float cost_price, selling_price, profit, loss;
    printf("Enter the cost price of the item: ");
    scanf("%f", &cost_price);
    printf("Enter the selling price of the item: ");
    scanf("%f", &selling_price);
    profit = selling_price - cost_price;
    loss = cost_price - selling_price;
    if (profit > 0) {
        printf("The seller has made a profit of Rs. %.2f\n", profit);
    } else {
        printf("The seller has incurred a loss of Rs. %.2f\n", loss);
    }
    return 0;
}