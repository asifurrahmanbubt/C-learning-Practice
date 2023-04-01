#include<iostream>
using namespace std;

struct Game {

    string username;
    int bestScore;
} userOne;

int main(){

    cout<<"Enter the Game Details" << endl;
    cout<<"Enter Username:" << endl;
    cin>>userOne.username;

    cout<<"Enter Bestscore: " << endl;
    cin>>userOne.bestScore;

    cout << "Username: " << userOne.username << endl;
    cout << "Best Score is: " << userOne.bestScore << endl;

return 0;
}
