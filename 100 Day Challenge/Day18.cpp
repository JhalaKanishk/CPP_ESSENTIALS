#include<iostream>
using namespace std;

void Replace(string s){
    //base condition
    if(s.length() == 0){
        return;
    }

    if(s[0] == 'p' && s[1] == 'i'){
        cout << "3.14";
        Replace(s.substr(2));
    }
    else{
        cout << s[0];
        Replace(s.substr(1));
    }
}

void Reverse(string s){
    //base condition
    if(s.length() == 0){
        return;
    }

    string ros = s.substr(1);
    Reverse(ros);

    cout << s[0];
}

int main(){
    cout << "Recursion Advance Problem" << endl;

    //Q1 Reverse a String using Recursion ?
    /*
    binod
    inod
    nod
    od
    d

    */
    Reverse("binod");

    //Q2 Replace pi with 3.14 ?
    /*
    "pippxxppiixipi"
    "3.14ppxxp3.14ixi3.14"
    */
   Replace("pippxxppiixipi");
    
    return 0;
}