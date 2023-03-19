#include<iostream>
using namespace std;

int main(){
    int a = 5, b = 6;
    int resultOne, resultTwo;

    resultOne = !(a<b) && (b>a);
    resultTwo = !((a<b) || (a>b));

    cout << "Output of AND operator,"<< resultOne << endl;
    cout << "Output of or operator,"<< resultTwo << endl;

    return 0;
}
