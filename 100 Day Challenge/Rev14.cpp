#include<iostream>
using namespace std;

/*Inheritance Modes*/
class Base{
    public : 
        int x;
    private : 
        int y;
    protected : 
        int z;
};

class Derived1 : public Base{
    /*
    x will remain Public
    y will remain Private
    z will be inaccessible
    */
};
class Derived2 : private Base{
    /*
    x will be Private
    y will be Private
    z will remain inaccessible
    */
};
class Dervived3 : protected Base{
    /*
    x will be protected
    y will be protected
    z will remain inaccessible
    */
};

//Single : Inheritance
class Mom{
    public : 
        Mom(){
            cout << "Hair Color Black" << endl;
        }
};
class Child : public Mom{
    public :
        Child(){
            cout << "Skin Color White" << endl;
        }
};
//Multi-Level : Inheritance
class GrandParent{
    public : 
        GrandParent(){
            cout << "DADA JI" << endl;
        }
};
class Parent : public GrandParent{
    public : 
        Parent(){
            cout << "PAPA JI" << endl;
        }
};
class Son : public Parent{
    public : 
        Son(){
            cout << "BETA JI" << endl;
        }
};
//Multiple : Inheritance
class Father{
    public :
        Father(){
            cout << "Father" << endl;
        }
};
class Mother{
    public :
        Mother(){
            cout << "Mother" << endl;
        }
};
class Daughter : public Father, Mother{
    public : 
        Daughter(){
            cout << "Daughter" << endl;
        }
};
//Hierarchical : Inheritance
class Animal{
    public : 
        Animal(){
            cout << "Animals having Four Legs!" << endl;
        }
};
class Lion : public Animal{
    public :
        Lion(){
            cout << "Lions are Carnivors" << endl;
        }
};
class Cow : public Animal{
    public : 
        Cow(){
            cout << "Cows are Herbivors" << endl;
        }
};
//Hybird : Inheritance
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




int main(){
    cout << "Inheritance" << endl;

    cout << "Single : Inheritance" << endl;
    Child Ch;

    cout << "++++++++++++++++++++++++++++++" << endl;

    cout << "Multi-Level : Inheritance" << endl;
    Son S;

    cout << "++++++++++++++++++++++++++++++" << endl;

    cout << "Multiple : Inheritance" << endl;
    Daughter D;

    cout << "++++++++++++++++++++++++++++++" << endl;

    cout << "Hierarchical : Inheritance" << endl;
    Lion L;
    Cow C;

    cout << "++++++++++++++++++++++++++++++" << endl;

    cout << "Hybird : Inheritance" << endl;
    B b;


    //+++++++++++++ (REVISION : 1)



    return 0;
}