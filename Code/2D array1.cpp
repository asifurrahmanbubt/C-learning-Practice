#include<iostream>
using namespace std;

int main(){

    int arr[2][2]={{0,1},{4,5}};

    for(int i=0;i<2;i++)
    for(int j=0;j<2;j++){
        cout<<" arr["<< i << "][" << j << "]: ";
        cout<< arr[i][j]<<endl;
    }

return 0;
}
