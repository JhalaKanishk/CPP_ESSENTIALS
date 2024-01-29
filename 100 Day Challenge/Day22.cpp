#include<iostream>
//using STL
#include<stack>
using namespace std;

void RevString(string s){

    stack<string> ST;

    //traversing all characters
    for(int i=0; i<=s.length()-1;i++){
        string word = "";

        while(s[i] != ' ' && i < s.length()){
            word += s[i];
            i++;
        }
        ST.push(word);
    }


    //to print all elements
    while(!ST.empty()){
        cout<< ST.top() << " ";
        ST.pop();//removing top after printing
    }
    cout << endl;
}


void RevSt(string s){

    stack<string> ST;

    for(int i=0;i<=s.length()-1;i++){
        string word = " ";

        while(s[i] != ' ' && i < s.length()){
            word += s[i];
            i++;
        }

        ST.push(word);

    }   

    while(!ST.empty()){
        cout << ST.top() << " ";
        ST.pop();
    } 
    cout << endl;
}

int main(){
    cout << "Q1 : Reverse a Sentence using Stack ?" << endl;
    /*
    Ex:  Hey, how are you doing ?
        doing? you are how Hey,
    */

    string s = "Hey, how are you doing?";
    RevString(s); 
    RevSt(s);

    return 0;
}