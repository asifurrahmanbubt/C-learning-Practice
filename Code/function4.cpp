#include<iostream>
using namespace std;

int addNumbers(int num1=5,int num2=6){
    int result;
    result = num1+num2;
    return result;
}
int main(){
    int result;
    result = addNumbers();
    cout<<"Addition is : " << result << endl;
    return 0;
}
