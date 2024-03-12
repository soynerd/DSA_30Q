#include <stdio.h>

struct book {
    char name[100];
    char author[100];
    float price;
};

int main() {
    
    struct book b1 = {"The Minecraft", "Awasthi", 20.5};
    struct book b2 = {"Advance Mathematics", "Summit", 15.75};
    struct book b3 = {"16", "Adarsh", 25.0};

    struct book maxi = b1;
    struct book mini = b1;

    if (b2.price > maxi.price)
        maxi = b2;
    else if (b2.price < mini.price)
        mini = b2;

    if (b3.price > maxi.price)
        maxi = b3;
    else if (b3.price < mini.price)
        mini = b3;

    printf("Most priced book:\n");
    printf("Name: %s\nAuthor: %s\nPrice: %.2f\n\n", maxi.name, maxi.author, maxi.price);

    printf("Least priced book:\n");
    printf("Name: %s\nAuthor: %s\nPrice: %.2f\n", mini.name, mini.author, mini.price);

    return 0;
}
