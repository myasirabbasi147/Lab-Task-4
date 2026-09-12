#include <stdio.h>
int main() {
    float balance;
    float withdrawal;
    printf("Enter You Balance: \n");
    scanf("%f", &balance);
    printf("Enter Your Withdrawal: \n");
    scanf("%f", &withdrawal);
    if (withdrawal>0 && withdrawal<balance) {
        printf("Withdrawal Approved");
    }
    else {
        printf("Withdrawal Denied");
    }
    return 0;
}