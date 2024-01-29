#include<iostream>
#include<math.h>
using namespace std;

//Access Specifiers & Modes of Inheritance
/*
    1. Public : Members are accessible outside the class.
    2. Private : Members are not accessible outside the class.
    3. Protected :Members are not accessible outside the class but can be accessed from the inherited class.
*/

class Base{
    public :
        int x;
    private :
        int y;
    protected :
        int z;
};
//public
class Derived : public Base{
    /*
        x will remain Public
        y will remain Private
        z will be inaccessible
    */
};
//private
class Derived2 : private Base{
     /*
        x will become Private
        y will remain Private
        z will be inaccessible
    */
};
//protected
class Derived2 : protected Base{
     /*
        x will become Protected
        y will remain Protected
        z will be inaccessible
    */
};

class Encapsule{
    int a;
    int b;
    public:
    int solve(int input){
        a=input;
        b=a/2;
        return b;
    }
};

class Student{
    public :
        int rno = 25;
        string name = "Meghna";

        Student(){
            cout << " Defalult Constructor" << endl;
            cout << "Rno : " << rno << endl;
            cout << "Name : " << name << endl;
        }
        Student(int rno, string name){
            cout << " Paramterized Constructor" << endl;
            this->rno = rno;
            this->name = name;
            cout << "Rno : " << rno << endl;
            cout << "Name : " << name << endl;
        }
        Student(Student& c){
            cout << " Copy Constructor" << endl;
            rno = c.rno;
            name = c.name;
            cout << "Rno : " << c.rno << endl;
            cout << "Name : " << c.name << endl;
        }
        //Destructor
        ~Student(){ 
            cout << "Destructor is Called." << endl;
        }
};

class Fruits{
    public :
        string name;
        int price;

        void display(){
            
            cout << "Name : " << name << endl;
            cout << "Price : " << price << endl;
        }
};

int main(){
    cout << "Hello World\nLet's complete OOP'S" << endl;
    /*
        Class : 
            User Defined Data-Type.
            Which holds its Data Member & Member Function.
            And can be used by creating the instance of Class.
            Class act as an blueprint for object.
            
        Object :
            Object is an instance of Class.
            When a Class is define it does not get memory
            but when the object of that is created memory gets allocated.
            There can be multiple objects of single Class.
        
        Constructor : 
            It is an special method that is invoked automatically when the object of class is created.
            Constructor is a member function of Class having the same name as of Class name.
            It does not return any value hance it does not have any return type.

            Types of Construtor : 
                1. DEFAULT
                2. PARAMETERIZED
                3. COPY
        
        Destructor :
            It is an special method that is invoked aotmatically when the object of class is created.
            Destructor is an member funcion of Class which is used to destroy the object created by constructor.
            Desturctor is having same name as of class name but having (~) sign in first.
            Destructor are used to release the memory space created by the Constructor.
            Objects are destroyed.

        ENCAPSULATION : 
            Wrapping up of Data & Mmeber fucntion in single unit.

            Two Important  property of Encapsulation :
                Data Protection: Encapsulation protects the internal state of an object by keeping its data members private. Access to and modification of these data members is restricted to the class’s public methods, ensuring controlled and secure data manipulation.

                Information Hiding: Encapsulation hides the internal implementation details of a class from external code. Only the public interface of the class is accessible, providing abstraction and simplifying the usage of the class while allowing the internal implementation to be modified without impacting external code.

        ABSTRACTION :
            Abstraction means displaying only essential information and hiding the details.

            Ex : pow(x, y);

        INHERITANCE : 
            The capability of a class to derive properties and characteristics from another class is called Inheritance.
            Inheritance is a feature or a process in which, new classes are created from the existing classes.
            The new class created is called “derived class” or “child class” and the existing class is known as the “base class” or “parent class”.

    */
    cout << "This is an Class Fruits : " << endl;
    Fruits obj;
    //Dot Operator
    cout << "If OBJECT we use the DOT Operator" << endl;
    obj.name = "Mango";
    obj.price = 25;
    obj.display();
    //Pointer
    cout << "If POINTER we used the Arror Operaor" << endl;
    Fruits *ptr = new Fruits();
    ptr->name = "Apple";
    ptr->price = 20;
    ptr->display();

    //Construcor
    Student *obj1 = new Student();//pointer
    delete obj1;
    Student obj2(52,"Kanishk");//object
    Student obj3(obj2);//object

    //Encapsulation
    Encapsule eobj;
    cout << "Encapsulation : " << endl;
    cout << "Enter a number : " << endl;
    int n;
    cin >> n;
    int ans = eobj.solve(n);
    cout << "Half : " << ans;
    cout << "" << endl;

    //Abstraction
    cout << "Abstraction : " << endl;
    cout << "Enter two number in which one is for power" << endl;
    int a, b;
    cin >> a >> b;
    cout << "Power : " << pow(a, b) << endl;

    //Inheritance
    cout << "Inheritance : " << endl;

    
    return 0;
}