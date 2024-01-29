#include<iostream>
using namespace std;
/*
The function that is calling the private member function should be declared public. The function will only execute if the public function is called from the object of that class.
*/

static int object = 0;//It is static so that every class object has the same value 
//they get memeory at runtime

class Test{
    public :
        //Constructor
        Test(){
            object++;
            cout << "Construtor is called!! : Object is Created : " << object << endl;
        }
        //Destructor
        ~Test(){
            cout << "Destructor is called!! : Object is Destroyed : " << object << endl;
            object--;
        }
};

class MyAS{
    public : //can be accessed from anywhere
        int publicVar;
        void publicFun(){
            cout << "This is a Public Function" << endl;
            this->privateFun();
            this->privateVar = 20;
        }
    private : //can be accessed from within the class
        int privateVar;
        void privateFun(){
            cout << "This is a Private Function" << endl;
        }
    protected : //can be accessed from within the class or derived class
        int protectedVar = 30;
        void protectedFun(){
            cout << "This is a Protected Function" << endl;
        }
    /*
    A friend class can access private and protected members of other classes in which it is declared as a friend. It is sometimes useful to allow a particular class to access private and protected members of other classes.
    */

    friend class f;//declaration
    /*It is a non-member function of a class which can access the private member of the class.*/
    friend void friendFunction(MyAS& obj);

};

void friendFunction(MyAS& obj){
    obj.privateVar;
    obj.protectedVar;
};

class MyDerAS:public MyAS{
    public :
        void derivedFun(){
            cout << "This is Derived class accessing protected function" << endl;
            protectedFun();
        }
};

class f{
    public :
        void display(MyAS& t){
            cout << "calling The Private Variable : " << t.privateVar << endl;
             cout << "calling The Protected Variable : " << t.protectedVar << endl;
        }
};


int main(){
    //TOPIC 5 : [ACCESS SPECIFIERS]
    //Access specifier in c++ can be private or public or protected. which defines the accessibility of data memeberse and member funtion outside the class.
    /*
    In C++, there are three access specifiers:
        public - members are accessible from outside the class
        private - members cannot be accessed (or viewed) from outside the class
        protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes. You will learn more about Inheritance later.
   */
  MyAS obj;
  obj.publicVar = 10;
  obj.publicFun();

  //obj.privateVar = 20; private not accessible outside the class
  //obj.privateFun(); private function not callable outside the class

    MyDerAS dobj;
    dobj.derivedFun();

    //TOPIC 6 : [FRIEND FUNCTION]  
    //frined function
    f fobj;
    //passing the object of base class
    fobj.display(obj);

    //TOPIC 7 : [DESTURUCTOR]
    /*
    -> A destructor is also a special member function like a constructor. Destructor destroys the class objects created by the constructor. 
    -> Destructor has the same name as their class name preceded by a tilde (~) symbol.
    -> It is not possible to define more than one destructor. 
    -> The destructor is only one way to destroy the object created by the constructor. Hence destructor can-not be overloaded.
    -> Destructor neither requires any argument nor returns any value.
    -> It is automatically called when an object goes out of scope. 
    -> Destructor release memory space occupied by the objects created by the constructor.
    -> In destructor, objects are destroyed in the reverse of an object creation.
    */    
    
    Test T1,T2,T3,T4;

    return 0;
}