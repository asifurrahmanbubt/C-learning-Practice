#include<iostream>
using namespace std;

int addNumber(int num1, int num2){
    int result;
    result = num1+num2;
    return result;
}
int main(){

    int num1,num2,result;
    cout<<"Enter two Number: ";
    cin>>num1>>num2;
    result = addNumber(num1,num2);
    cout << "Addition is: " << result << endl;

return 0;
}
