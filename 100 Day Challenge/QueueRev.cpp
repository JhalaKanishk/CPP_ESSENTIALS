#include<iostream>
using namespace std;

#define n 100

class QUEUE{
    int *arr;
    int front, back;

    QUEUE(){
        arr = new int[n];
        front = -1;
        back = -1;
    }
    void Enqueue(int x){
        if(back == n-1){
            cout << "Queue Overflow!" << endl;
            return;
        }
        back++;
        arr[back] = x;

        if(front == -1){
            front++;
        }
    }
    void Dequeue(){
        if(front == -1 || front > back){
            cout << "No Element to Pop" << endl;
            return;
        }
        front++;
    }
    int Top(){
        return arr[front];
    }
    bool Empty(){

    }
};

int main(){
    cout << "QUEUE" << endl;
    return 0;
}