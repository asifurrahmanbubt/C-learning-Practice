#include<iostream>
using namespace std;

int main(){

    int number = 5;
    int *numPointer;
    numPointer = &number;
    cout << "Address of number variable is : " << &number << endl;
    cout << "Address stored in numPointer variable is : " << numPointer << endl;
    cout << "Value of *numPointer variable is : " << *numPointer << endl;

return 0;
}
