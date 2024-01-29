#include<iostream>
using namespace std;

//prediefined size of stack
#define n 100

class Stack{
    
    int* arr;//Dynamic Array without Size
    int top;

    public : 
        Stack(){
            arr = new int[n];//passing size
            top = -1;//starting value
        }

        void Push(int x){
            if(top == n-1){
                cout << "Stack Overflow!!" << endl;
                return;
            }
            top++;//size increased
            arr[top] = x;//element added
        }

        void Pop(){
            //checking is there any element or not
            if(top == -1){
                cout << "No Element to POP" << endl;
                return;
            }
            top--;//size decreased
        }

        int Top(){
            //checking that top already is on -1
            if(top == -1){
                cout << "No Element in Stack"<< endl;
                return -1;
            }
            return arr[top];
        }

        bool Empty(){
            //checking the stack is empty or not
            return top == -1;
        }
};

int main(){
    cout << "STACK : DATA STRUCTURE" << endl;
    //Stores a list of item int which an item can be added to or removed from the list only at one end.
    //LIFO Mechanism : Last In First Out
    //OPERATIONS : Push, Pop, Top, Empty
    //Top : -1  (Empty)
    //Top : n-1 (Overflow)

    Stack St;
    St.Push(5);
    St.Push(10);
    St.Push(15);
    St.Push(20);
    St.Push(25);

    cout << "Top Element : " << St.Top() << endl;

    St.Pop();
    cout << "Top Element : " << St.Top() << endl;
    St.Pop();
    St.Pop();
    St.Pop();
    St.Pop();

    cout << "Top Element : " << St.Top() << endl;

    cout << "Stack Condition Empty (1) or not Empty (0) : " << St.Empty() << endl;

    return 0;
}
/*
int* arr;//dynamic array
    int top;

    public :
        Stack(){
            arr = new int[n]; //default size of stack is n.
            top = -1;
        }

        //push operation
        void push(int x)
        {
            //checking that Stack is full or not
            if(n == -1){
                cout << "Stack Overflow!!" << endl;
                return;
            }
            //if not you can insert
            top++;//size increased
            arr[top];//value inserted
        }

        //pop operation
        void pop(){
            if(top == -1){
                cout << "No element to Pop!!" << endl;
                return;
            }   
            top--;//size decreased element deleted
        }
*/