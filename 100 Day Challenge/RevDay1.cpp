#include<iostream>
using namespace std;

int main(){
    cout << "Day 1/100 Revision" << endl;
    //output
    cout << "Hello World" << endl;
    //input
    int n;
    cout << "Enter a Number " << endl;
    cin >> n;
    cout << "You Entered : " << n << endl;

    string name;
    cout << "Enter your Name" << endl;
    cin >> name;
    cout << "You Entered : " << name << endl;

    //Q1.
    cout << "Enter Two Number :" << endl;
    int x, y;
    cin >> x >> y;
    cout << ": Arithmatic Operations : " << endl;
    //1.Binary Operators
    cout << "Sum : " << (x+y) << endl;
    cout << "Diff : " << (x-y) << endl;
    cout << "Mul : " << (x*y) << endl;
    cout << "Div : " << (x/y) << endl;
    cout << "Rem : " << (x%y) << endl;
    //2.Unary Operators
    cout << "Pre Increment " << endl;
    int a = 10;
    int b = a++;//b=10 a=11
    cout << a << " " << b << endl;
    cout << "Post Increment " << endl;
    int  c = ++a;//c=12 a=12
    cout << a << " " << c << endl;

    //Q2.
    int i=10, j=20, k;
    //  10->9 9->10 19   19->20 10->9 20    10    20  
    //  9     10    19    20    9     20    10    20
    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;
    cout << "i : " << i << endl;//10
    cout << "j : "<< j << endl;//20
    cout << "k : "<< k << endl;//-20

    cout << ": Assginment Operators : " << endl;
    //Q3.
    int z = 5;cout << "z : " << z <<"\n";
    z += 3; cout << "z+=3 : " << z <<"\n";
    z -= 3; cout << "z-=3 : " << z <<"\n";
    z *= 3; cout << "z*=3 : " << z <<"\n";
    z /= 3; cout << "z/=3 : " << z <<"\n"; 

    cout << ": Comparison Operator :" << endl;
    //Q4.
    int u=5, v=4;
    //0 -> false 1 -> true
    cout << (u == v) << endl;//false
    cout << (u < v) << endl;//false
    cout << (u > v) << endl;//true
    cout << (u <= v) << endl;//false
    cout << (u >= v) << endl;//true
    cout << (u != v) << endl;//true

    //Q6.
    cout << "You Entered : " << n << endl;
    if(n < 10){
        cout << n << " is less than 10" << endl;
    }
    else if(n == 10){
        cout << n << " is equal to 10" << endl;
    }
    else{
        cout << n << " is greater than 10" << endl;
    }

    cout << " : Logical Operator : " << endl;
    return 0;
}