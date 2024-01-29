#include<iostream>
#include<string>
using namespace std;

int main(){
    cout << "C++ : STRINGS" << endl;
    cout << "Enter String" << endl;
    // //1
    // string str;
    // cin >> str;
    // cout << "String : " << str << endl;

    // //2
    // string str1(5, 'k');
    // cout << str1 << endl;

    // //3
    // string str2 = "Kanishk Raj";
    // cout << str2 << endl;

    //4
    // string str3;
    // getline(cin, str3);//it take total string
    // cout << str3 << endl;


    //Functions of String
    string s1, s2;
    s1 = "Kanishk";
    s2 = "Raj";
    //Append
    //cout << s1.append(s2) << endl;
    //cout << s1 + s2 << endl;

    //Access
    cout << s1[0] << endl;

    //clear
    string abc = "kjsjnfweon ewrojifnvbwryfrb wejvb";
    abc.clear();
    cout << abc;

    string str1, str2;
    str1 = "abc";
    str2 = "def";
    //Compare
    if(str1.compare(str2)){
        cout << "Not Equal" << endl;
    }
    else{
        cout << "Equal" << endl;
    }

    //Empty
    cout << str1.empty() << endl;//0 false
    cout << abc.empty() << endl;//1 true

    //Erase
    string name = "Kanixyzshk";//4 the index se 3 char uda do
    name.erase(4, 3);
    cout << name << endl;
    return 0;;
}