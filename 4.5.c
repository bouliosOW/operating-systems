#include <stdio.h>

struct House {
    char address[100];
    int squareFeet;
    int bedrooms;
    int bathrooms;
    double price;
};

int main() {
    struct House houses[3] = {
        {"123 Abc St, MA", 1500, 3, 2, 221000.00},
        {"456 Grove St, NB", 2000, 4, 3, 325000.50},
        {"789 Pine Ave, TX", 1800, 3, 2, 350000.75}
    };

    for (int i = 0; i < 3; i++) {
        printf("House %d:\n", i + 1);
        printf("Address: %s\n", houses[i].address);
        printf("Square Feet: %d\n", houses[i].squareFeet);
        printf("Bedrooms: %d\n", houses[i].bedrooms);
        printf("Bathrooms: %d\n", houses[i].bathrooms);
        printf("Price: $%.2f\n\n", houses[i].price);
    }

    return 0;
}
