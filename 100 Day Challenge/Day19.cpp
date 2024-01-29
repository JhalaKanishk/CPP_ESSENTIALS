#include<iostream>
using namespace std;

int main(){
    cout << "STRINGS" << endl;
    /*
    Character Array : 
        1. Need to know size beforehand
        2. Larger size required for operation
        3. No terminating extra character
    Strings :
        1. No need to know size beforehand
        2. Performing operations like concatination & append is easier
        3. Terminated with a special character
    */

    //Declare a string
    string str;
    //IO
    // cin >> str;
    // cout << str;

    // string str1(5, 'k');
    // cout << str1 << endl;

    // str = "kanishk";
    // cout << str << endl;

    //IP with spaces
    // string str2;
    // getline(cin, str2);
    // cout << str2 << endl;


    //Functions : STRING
    string s1 = "My";
    string s2 = "Family";
    //Append
    //1
    // s1.append(s2);
    // cout << s1 << endl;

    //2
    cout << s1+s2 << endl;

    //Access
    cout << s1[0] << endl;

    //Clear
    string ABC = "kjcwudhc dsvhsblbvevv ";
    ABC.clear();
    cout << ABC << endl;

    //Compare
    string S1 = "abc";
    string S2 = "xyz";



    return 0;
}