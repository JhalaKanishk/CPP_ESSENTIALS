#include<iostream>
using namespace std;

#define n 100

class Stack{
    int *arr;
    int top;
    public : 
        Stack(){
            arr = new int[n];
            top = -1;
        }
        void Push(int x){
            if(top == n-1){
                cout << "Stack Overflow" << endl;
            }
            top++;
            arr[top] = x;
        }
        void Pop(){
            if(top == -1){
                cout << "No Element to POP" << endl;
            }
            top--;
        }
        int Top(){
            if(top == -1){
                cout << "No Element in Stack" << endl;
                return -1;
            }
            return arr[top];
        }
        bool Empty(){
            return top == -1;
        }
        
};



int main(){
    cout << ": STACK :" << endl;

    Stack ST;

    ST.Push(1);
    ST.Push(2);
    ST.Push(3);
    ST.Push(4);
    ST.Push(5);

    cout << "Top Element : " << ST.Top() << endl;

    ST.Pop();
    ST.Pop();
    ST.Pop();
    
    cout << "Top Element : " << ST.Top() << endl;

    cout << "Stack Empty or Not : " << ST.Empty() << endl;

    return 0;
}