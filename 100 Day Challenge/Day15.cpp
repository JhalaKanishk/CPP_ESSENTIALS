#include<iostream>
using namespace std;

class Parent{
    public : 
        virtual void Print(){
            cout << "Parent Class" << endl;
        }
        void Show(){
            cout << "Parent Class" << endl;
        }
};
class Child : public Parent{
    public : 
        void Print(){
            cout << "Child Class" << endl;
        }
        void Show(){
            cout << "Child Class" << endl;
        }
};

class Complex{
    public : 
        int real;
        int img;

        Complex(int x, int y){
            real = x;
            img = y;
        }

         //c is an object of class complex
         //complex is return type
         //overloading operator
        Complex operator+ (Complex &c){
            Complex ans(0,0);
            ans.real = real + c.real;
            ans.img = img + c.img;
            return ans;
        }

};

class Area{
    public : 
        double toPrint(int r, double pi){
            return (pi*r*r);
        }
        int toPrint(int a){
            return (a*a);
        }
        int toPrint(int l, int b){
            return (l*b);
        }
};

int main(){
    cout << "Polymorphism" << endl;
    /*
    Polymorphism is a principle in object oriented programming that allows objects of different types to be treated as objects of another type.
    Decide on 
    1. Run time (Resolved at RunTime)
        1.1 Function Overriding or Virtual Function
    2. Comiple time (Resolved at CompileTime)
        2.1 Function Overloading
        2.2 Operator Overloading
    Having many forms!!
    Ex : 
    "Right"
    Left Right
    Rigth wrong
    */

    cout << "1. Compile Time Polymorphism : " << endl;
    cout << "1.1 Function Overloading" << endl;
    //It is a feature of object-oriented programming where two or more functions can have the same name but different parameters
    Area Rectangle;
    cout << "Rectangle Area : " << Rectangle.toPrint(4,2) << endl;
    Area Circle;
    cout << "Circle Area : " << Circle.toPrint(2, 3.14) << endl;
    Area Square;
    cout << "Square Area : " << Square.toPrint(4) << endl;

    cout << "---------------------------------------" << endl;


    cout << "1.2 Operator Overloading" << endl;
    //It is an idea of giving special meaning to an existing operator in C++ without changing its original meaning.
    // "+" for adding 
    // "+" for concat
    Complex C1(1,2);
    Complex C2(1,3);

    //c1 real is passing
    //c2 real is passing
    // cout << "(+) Operator Overloading" << endl;
    // Complex C3 = C1+C2;
    // cout << C3.real << " i" << C3.img << endl;


    cout << "2. Run Time Polymorphism : " << endl;
    cout << "2.1 Function Overriding" << endl;
    //If you want to do function overriding you have to use virtual keyword in parent class
    Parent *p;
    Child c;

    //asgined child class object child will print
    p = &c;
    
    //yes function overrriding
    p->Print();//it will print child
   // no function overriding
    p->Show();//it will print parent


    //Diff B/W 
    /*
    Complie Time
        1. Function Overloading.
        2. Function name should be same but Parameter can be different
        3. Faster execution time.
        4. More memory efficent.

    Run Time
        1. Function Overriding.
        2. Function name and parameter should be same.
        3. Solwer execution time.
        4. Less memory efficent.
    */

   /*
   Virtual functions ensure that the correct function is called for an object, regardless of the type of reference (or pointer) used for the function call.
    They are mainly used to achieve Runtime polymorphism.
    Functions are declared with a virtual keyword in a base class.
    The resolving of a function call is done at runtime.
   */
    return 0;
}