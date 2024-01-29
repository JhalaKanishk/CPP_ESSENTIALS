#include<iostream>
using namespace std;

class MyCons{
    public :
        int price = 300000;
        string model = "Ferrari";
        MyCons(){
            cout << "Default Constructor" << endl;
            cout << "CNAME : " << model << endl;
            cout << "CPRICE : " << price << endl;
        }
        MyCons(int price, string model){
            cout << "Parameterized Construtor" << endl;
            cout << "CNAME : " << model << endl;
            cout << "CPRICE : " << price << endl;
        }
        MyCons(MyCons &C){
            cout << "Copy Constructor" << endl;
            price = C.price;
            model = C.model;
            cout << "CNAME : " << model << endl;
            cout << "CPRICE : " << price << endl;
        }
};

class MyC{
    public :
        int age = 21;
        string name = "KRSJ";

        MyC(){
            cout << "Default" << endl;
            cout << "Age : " << age << endl;
            cout << "Name : " << name << endl;
        }

        MyC(int age, string name){
            cout << "Parametrized" << endl;
            this->age = age;
            this->name = name;
            cout << "Age : " << age << endl;
            cout << "Name : " << name << endl;
        }

        MyC(MyC &O){
            cout << "Copy" << endl;
            age = O.age;
            name = O.name;
            cout << "Age : " << age << endl;
            cout << "Name : " << name << endl;
        }
};

class Student{
    public :
        int age;
        string name;
        int Class;
        string Stream;        

        void Detail(int age, string name){
            this->age = age;
            this->name = name;

            cout << "Name : " << name << endl;
            cout << "Age : " << age << endl;
        }

        void About(int Class,string Stream);
};

void Student::About(int Class, string Stream){
    cout << "Class : " << Class << endl; 
    cout << "Stream : " << Stream << endl; 
}



string name = "Kanishk";

int main(){
    cout << "Class & Objects" << endl;
    Student S;
    cout << "---Student Details" << endl;
    S.Detail(21, "Kanishk");
    cout << "---Student Opt" << endl;
    S.About(12, "Science");

    string name = "kittu";

    cout << "Local Var : " << name << endl;
    cout << "Global Var : " << ::name << endl;

    MyCons C1;
    MyCons C2(500000, "RangeRover");
    MyCons C3(C2);


    MyC O1;
    MyC O2(21, "Kanishk");
    MyC O3(O1);
    
    return 0;
}