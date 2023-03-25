#include<iostream>
using namespace std;

int main(){
     int number[3];
     cout<<"Enter the numbers: " << endl;
     for(int i=0;i<3;i++){
        cin>>number[i];
     }

     cout<<"The Numbers are : " << endl;
     for(int i=0;i<3;i++){
        cout<< number[i] << endl;
     }
     return 0;
}
