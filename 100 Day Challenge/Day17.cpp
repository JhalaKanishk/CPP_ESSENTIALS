#include<iostream>
using namespace std;

//We use function in Recursion
int Sum(int n){

    //base cond
    if(n == 0){
        return 0;
    }

    int PrevSum = Sum(n-1);//function calling itself
    return n + PrevSum;//adding the last sums

    /*
    Memory It will be stored in stack
    Sum(0) = 0
    Sum(1) = 0 + 1
    Sum(2) = 0 + 1 + 2
    Sum(3) = 0 + 1 + 2 + 3
    Sum(4) = 0 + 1 + 2 + 3 + 4
    */
};


int cal(int m, int p){
    //base condition
    if(p == 0){
        return 1;
    }

    int PrevPow = cal(m, p-1);
    /*
    pow(4,3) = 4 * 16 
    pow(4,2) = 4 * 4
    pow(4,1) = 1 * 4
    pow(4,0) = 1
    */
    return m * PrevPow;
};

int fac(int n){
    //base condition
    if(n == 0){
        return 1;
    }

    //int prevFac = fac(n-1);
    //return n * prevFac;
    return n * fac(n-1);
};

int Fibo(int n){
    //base condition
    // if(n == 0){
    //     return 0;
    // }
    // if(n==1){
    //     return 1;
    // }
    if(n == 0 || n == 1){
        return n;
    }
    /*
                    4
            3              2
        2       1       1       0
    1       0
    */

    return Fibo(n-1)+Fibo(n-2);
};

int main(){
    cout << "RECURSION" << endl;
    //When a function call itself to make the problem smaller.

    //Q1 : Add all Number till n
    cout << "Enter a Number" << endl;
    int n;
    cin >> n;
    cout << "Total Sum till n : " << Sum(n) << endl;

    //Q2 : Calculate Permutation
    cout << "Enter a Number" << endl;
    int m, p;
    cin >> m;
    cout << "Enter Power" << endl;
    cin >> p;
    cout << n  << " Raised to Power " << p << " : " << cal(m,p) << endl;

    //Q3 : Find Factorial of N
    cout << "Enter a Number" << endl;
    int f;
    cin >> f;
    cout << "The Factorial of Number " << f << " is : " << fac(f) << endl; 

    //Q4 : Find Fibonacci of N
    // 0, 1, 1, 2, 3, 5, 8, 13......
    cout << "Enter a Number" << endl;
    int fib_num;
    cin >> fib_num;
    cout << "The Fibonacci number for " << fib_num << " is : "<< Fibo(fib_num);

    return 0;
}