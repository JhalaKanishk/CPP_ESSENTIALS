#include<iostream>
using namespace std;

#define n 100
class QUEUE{
    int* arr;
    int front;
    int back;

    public : 
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
                cout << "No Elements to POP" << endl;
                return;
            }
            front++;
        }

        int Peak(){
            if(front == -1 || back ==1){
                cout << "No Elements in Queue" << endl;
                return -1;
            }
            return arr[front];
        }

        bool Empty(){
            if(front == -1 || back ==1){
                return true;
            }
            return false;
        }
};

int main(){
    cout << "QUEUE" << endl;

        QUEUE Q;

        Q.Enqueue(1);
        Q.Enqueue(2);
        Q.Enqueue(3);
        Q.Enqueue(4);
        Q.Enqueue(5);

        cout << "Top of the QUEUE : " << Q.Peak() << endl;

        Q.Dequeue();
        Q.Dequeue();
        Q.Dequeue();

        cout << "Top of the QUEUE : " << Q.Peak() << endl;

        cout << "Checking if QUEUE is Empty or Not : " << Q.Empty() << endl;


    return 0;
}