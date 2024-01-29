#include<iostream>
using namespace std;

class Base{
    public : 
        int x;
        void show(){
            cout << "Public" << endl;
        }

    private : 
        int y;

    protected : 
        int z;
};

/*Inheritance Modes*/
class Derived1: public Base{
    /*
    X will remain Public
    Y will remain Priavte
    Z will be inaccessible
    */
  

};
class Derived2: private Base{
    /*
    X will remain Priavte
    Y will remain Priavte
    Z will be inaccessible
    */
  
};
class Derived3: protected Base{
    /*
    X will remain Protected
    Y will remain Protected
    Z will be inaccessible
    */
};


/*Single : Inheritance*/
//The inheritance in which a single derived class is inherited from a single base class
class Mom{
    public : 
        Mom(){
            cout << "Hair Color Black" << endl;
        }
};
class Child:public Mom{
    public : 
        Child(){
            cout << "Eye Color Brown" << endl;
        }
};  

/*Multi-Level : Inheritance*/
//The inheritance in which a derived class is inherited from a base class and a base class is inherited from another super base class.
class GrandPa{
    public :
        GrandPa(){
            cout << "GrandFather" << endl;
        }
};
class Father: public GrandPa{
    public : 
        Father(){
            cout << "Father" << endl;
        }
};
class Son: public Father{
    public : 
        Son(){
            cout << "Son" << endl;
        }
};

/*Multiple : Inheritance*/
//The inhertitance in which a derived class gets inherits from more then one base class.
class Father1{
    public :
        Father1(){
            cout << "Family : Father" << endl;
        }
};
class Mom1{
    public : 
        Mom1(){
            cout << "Family : Mother" << endl;
        }
};
class Son1: public Father1, Mom1{
    public :
        Son1(){
            cout << "Family : Son" << endl;
        }
};

/*Hierarchical Inheritance*/
//The inheritance in which there are multiple derived classes from one single base class.
class Animal{
    public :
        Animal(){
            cout << "Animals have Four Legs" << endl;
        }
};
class Lions : public Animal{
    public :
        Lions(){
            cout << "Lions are Carnivors" << endl;
        }
};
class Cows : public Animal{
    public : 
        Cows(){
            cout << "Cows are Herbivors" << endl;
        }
};

/*Hybrid Inheritance*/
//The combination of more then one Inheritance. 
class A{
    public : 
        A(){
            cout << "A" << endl;
        }
};
class B : public A{
    public : 
        B(){
            cout << "B" << endl;
        }
};
class C : public A{
    public : 
        C(){
            cout << "C" << endl;
        }
};
class D : public C{
    public : 
        D(){
            cout << "D" << endl;
        }
};


/*DIAMOND PROBLEM*/
class Shapes{
    public : 
        Shapes(){
            cout << "Shape" << endl;
        }
};
class Circle : virtual public Shapes{
    public : 
        Circle(){
            cout << "Circle" << endl;
        }
};
class Rectangle : virtual public Shapes{
    public : 
        Rectangle(){
            cout << "Rectangle" << endl;
        }
};

class Mixed : public Circle, Rectangle{
    public : 
        Mixed(){
            cout << "Mixed" << endl;
        }
};


int main(){
    cout << "Inheritance" << endl;
    /*
    INHERITANCE : 
        In C++, it is possible to inherit attributes and methods from one class to another. We group the "inheritance concept" into two categories:

        Derived class (child) - the class that inherits from another class
        Base class (parent) - the class being inherited from

        To inherit from a class, use the : symbol.
    */

    // cout << "Single : Inheritance" << endl;
    // Child c;

    // cout << "----------------------------" << endl;

    // cout << "Multi-Level : Inheritance" << endl;
    // Son s;

    // cout << "----------------------------" << endl;

    // cout << "Multiple : Inheritance" << endl;
    // Son1 s1;

    // cout << "----------------------------" << endl;

    // cout << "Heirarchical : Inheritance" << endl;
    // Lions L;
    // Cows C;

    // cout << "----------------------------" << endl;

    // cout << "Hybird : Inheritance" << endl;
    // D d;
    // B b;

    // cout << "----------------------------" << endl;

    // //DIAMOND PROBLEM
    // cout << "Virtual : Inheritance" << endl;
    // Mixed M;
    // //Shape will come Two Times!!
    sample obj;
    obj.fun();


    return 0;
}