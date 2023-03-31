#include<iostream>
#include<cstring>
using namespace std;

int main(){

    char str1[] = "Ahnaf";
    char str2[] = "Atef";
    char str3[15];
    int len;

    //copy str1 into str3
    strcpy( str3, str1);
    cout << "Copied string is: " << str3 << endl;

    //concantenates str1 and str2
    strcat( str1, str2);
    cout << "String concantenation is : " << str1 << endl;

    //total lenghth of str1 after concatenation
    len = strlen(str1);
    cout << "Length of the string str1 is, " << len << endl;

return 0;
}
