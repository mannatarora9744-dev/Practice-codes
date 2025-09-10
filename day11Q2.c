// Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profitLoss, percentage;

    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);

    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);

    if (costPrice == 0) {
        printf("Cost Price cannot be zero.\n");
        return 1;
    }

    profitLoss = sellingPrice - costPrice;

    if (profitLoss > 0) {
        percentage = (profitLoss / costPrice) * 100;
        printf("Profit Percentage: %.2f%%\n", percentage);
    } else if (profitLoss < 0) {
        percentage = (-profitLoss / costPrice) * 100;
        printf("Loss Percentage: %.2f%%\n", percentage);
    } else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}