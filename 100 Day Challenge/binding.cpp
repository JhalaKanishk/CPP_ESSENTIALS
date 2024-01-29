#include<iostream>

using namespace std;

// Base Class Definition.
class base {
    public:
        // Virtual function declared in the base class.
        virtual void common() {
            cout << "function of base class\n";
        }
};

// Derived Class Definition.
class derived: public base {
    public:
        // The common function has been overridden (re-defined) here.
        void common() {
            cout << "function of derived class\n";
        }
};

// Driver code
int main() {
    base b;           // Object of the base class. 
    derived d;        // Object of the derived class.
   

    // Pointer of base class assigned address of the derived class.  
    base *ptr; 

    ptr = &d;      
    // Virtual function, binded at runtime.
    ptr->common();

    // Pointer of base class assigned address of its class. 
    ptr = &b;       
    // Virtual function, binded at runtime.
    ptr->common();
    

    return 0;
}
