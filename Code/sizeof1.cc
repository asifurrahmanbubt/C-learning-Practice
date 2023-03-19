#include<iostream>
using namespace std;

int main()
{
    int age = 15;
    float temperature = 39.2;
    double temperature1 = 38;
    char name = 'A';
    bool coffee_time = true ;
    cout << " Size of the integer value 'age' is : " << sizeof(age)<<endl;
    cout << " Size of the float variable 'temperature' is : " << sizeof(temperature)<<endl;
    cout << " Size of the double variable 'temperature1' is : " << sizeof(temperature1)<<endl;
    cout << " Size of the char variable 'name' is : " << sizeof(name)<<endl;
    cout << " Size of the boolean variable 'coffee_time' is : " << sizeof(coffee_time)<<endl;

    return 0;
}
