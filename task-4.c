#include <stdio.h>
int main() {
    int performance_rating;
    int years_of_service;
    printf("Enter your performance rating: \n");
    scanf("%d", &performance_rating);
    printf("Enter your years of service: \n");
    scanf("%d", &years_of_service);
    if (performance_rating == 5 && years_of_service>=3) {
        printf("Excellent Bonus");
    }
    else if (performance_rating == 4 && years_of_service>=2) {
        printf("Good Bonus");
    }
    else if (performance_rating == 3 && years_of_service>=1) {
        printf("Basic Bonus");
    }
    else {
        printf("No Bonus");
    }
    return 0;
}