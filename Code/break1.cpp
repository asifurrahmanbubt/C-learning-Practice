#include<iostream>
using namespace std;

int main()
{
    int num;

    for(num=1;num<11;num++){
            if(num==5){
            break;
    }
        cout<<"Loop is running : " << num << endl;
    }
    return 0;
}
