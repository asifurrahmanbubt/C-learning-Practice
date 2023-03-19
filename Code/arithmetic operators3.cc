#include<iostream>
using namespace std;

int main(){
    int product_one = 5;
    int product_two = 10;
    int quantity_one;
    int quantity_two;
    int total_quantity;
    int total_price_one;
    int total_price_two;
    int total_cart;
    float avarage_cost;

    cout << "Enter the product one quantity: ";
    cin >> quantity_one;

    cout << "Enter the product two quantity: ";
    cin >> quantity_two;

    total_price_one = product_one * quantity_one;
    total_price_two = product_two * quantity_two;

    total_cart = total_price_one + total_price_two;
    cout << "Your Total Cart Value is : "<<total_cart<<"$"<<endl;

    total_quantity = quantity_one + quantity_two;
    avarage_cost = total_cart / total_quantity;
    cout << "Your Average Product Value: "<<avarage_cost<<"$"<<endl;

    return 0;
}
