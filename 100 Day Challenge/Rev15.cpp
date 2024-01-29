#include<iostream>
using namespace std;

class Base{
    public : 
        virtual void Print(){
            cout << "Base Class" << endl;
        }
        void Show(){
            cout << "Base Class" << endl;
        }
};
class Derived : public Base{
    public :
        void Print(){
            cout << "Derived Class" << endl;
        }
        void Show(){
            cout << "Derived Class" << endl;
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

        Complex operator+ (Complex &c){
            Complex ans(0,0);
            ans.real = real + c.real;
            ans.img = img + c.img;
            return ans;
        }

        Complex operator- (Complex &c){
            Complex ans(0,0);
            ans.real = real - c.real;
            ans.img = img - c.img;
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
    cout << "++++++++++++++++++++++++" << endl;

    cout << "Compile Time :  Polymorphism" << endl;
    cout << "1.Function Overloading" << endl;
    //Function Having Same Name but differrent Arguments
    cout << "Area of : " << endl;
    Area Rectangle;
    cout << "Rectangle Area : " << Rectangle.toPrint(4,2) << endl;
    Area Circle;
    cout << "Circle Area : " << Circle.toPrint(2, 3.14) << endl;
    Area Square;
    cout << "Square Area : " << Square.toPrint(4) << endl;

    cout << "++++++++++++++++++++++++" << endl;
    cout << "2. Operator Overloading" << endl;
    //Operator Having Same Name but differrent Performance

    Complex C1(2,4);
    Complex C2(4,2);

    cout << "(+) Operator Overloading" << endl;
    Complex C3 = C1 + C2;
    cout << C3.real << " + " << C3.img << "i" << endl;

    Complex C4(4,8); 
    Complex C5(2,6); 
    cout << "(-) Operator Overloading" << endl;
    Complex C6 = C4 - C5;
    cout << C6.real << " - " << C6.img << "i" << endl;

    cout << "++++++++++++++++++++++++" << endl;

    cout << "Run Time : Polymorphism" << endl;
    cout << "1.Function Overriding" << endl;
    Base *b;
    Derived d;
    b = &d;
    b->Print();//address of derived class
    b->Show();//address of derived but it will jump over base class first

    return 0;
}