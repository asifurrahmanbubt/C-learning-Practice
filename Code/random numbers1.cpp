#include<iostream>
#include<time.h>
using namespace std;

int main(){

    int number;
    srand(time(0));
    number = rand();
    cout<< "The Generated Random Number is: " << number;

    return 0;
}
