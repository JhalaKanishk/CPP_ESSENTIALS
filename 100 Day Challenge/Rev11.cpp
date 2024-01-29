#include<iostream>
using namespace std;

int salary = 5000;

class MyConstructor{
    public : 
        string model = "BMW";
        int price = 500000;

        MyConstructor(){
            cout << "Default Constructor" << endl;
            cout << "Model : " << model << endl;
            cout << "Price : " << price << endl;
        }
        MyConstructor(string model, int price){
            cout << "Parameterized Constructor" << endl;
            this->model = model;
            this->price = price;
            cout << "Model : " << model << endl;
            cout << "Price : " << price << endl;
        }
};

class Student{
    public : 
        int age;
        string name;
        string Cname;
        string Sname;

        void set(int age, string name){
            this->age = age;
            this->name = name;
        }
        void setC(string Cname, string Sname){
            this->Cname = Cname;
            this->Sname = Sname;
        }
        void get(){
            cout << "Name : " << name << endl;
            cout << "Age : " << age << endl;
        }
        void show();
};

//Scope Resolution
void Student::show(){
    cout << "Your Location : " << endl;
    cout << "City : " << Cname << endl;
    cout << "State : " << Sname << endl;
};





int rno = 52;

//Constructor
class Con{
    public :
        int Cprice = 4000000;
        string Cname= "Fortuner";
        Con(){
            cout << "Default Constructor" << endl;
            cout << "CName : " << Cname << endl;
            cout << "CPrice: " << Cprice << endl;
        }
        Con(int Cprice, string Cname){
            cout << "Parameterized Constructor" << endl;
            this->Cname = Cname;
            cout << "CName : " << Cname << endl;
            this->Cprice = Cprice;
            cout << "CPrice: " << Cprice << endl;
        }
};

string Car = "Fortuner";

class Employee{
    public : 
        int Eid;
        string Ename, Ecity, Ecountry;

        void set(int Eid, string Ename){
            this->Eid = Eid;
            this->Ename = Ename;
        }
        void get(){
            cout << "EID : " << this->Eid << endl;
            cout << "ENAME : " << this->Ename << endl;
        }

        //Declaring inside
        void getC(string Ecity, string Ecountry);
};

//Defination outside
void Employee::getC(string Ecity, string Ecountry){
    this->Ecity = Ecity;
    cout << "ECITY : " << this->Ecity << endl;
    this->Ecountry = Ecountry;
    cout << "ECOUNTRY : " << this->Ecountry << endl;
};



string B_color = "Purple";

class CStudent{
    public :
        int Sid;
        string Sname, city, state;

        void SetGet(int Sid, string Sname){
            this->Sid = Sid;
            this->Sname = Sname;
            cout << "SID : " << Sid << endl;
            cout << "SNAME : " << Sname << endl;
        }

        void Saddress(string city, string state);
};

//Constructor
void CStudent::Saddress(string city, string state){
    this->city = city;
    this->state = state;
    cout << "SCITY : " << city << endl;
    cout << "SSTATE : " << state << endl;
}   

int main(){
    // Student s;
    // int age = 21;
    // s.set(age, "Kanishk");
    // s.get();
    // cout << "Enter City and State name : " << endl;
    // cout << "City : " ;
    // cin >> s.Cname;
    // cout << "State : ";
    // cin >> s.Sname;
    // s.show();

    // MyConstructor c1;
    // MyConstructor c2("ROLLS_ROYCE", 1000000);

    // int salary = 5000000;
    // cout << "G Salary : " << ::salary << endl;
    // cout << "L Salary : " << salary << endl;

    //+++++++++++++ (REVISION : 1)

    // Teacher t;
    // int age = 51;
    // t.set(age,"Manish");
    // t.get();
    // t.setS("Mathematics");
    // t.getS();

    // Mycons c1;
    // Mycons c2(50, "Amool");

    // int rno = 20;
    // cout << "G rno : " << ::rno << endl;
    // cout << "L rno : " << rno << endl;

    //+++++++++++++ (REVISION : 2)
    // Employee e;
    // e.Eid = 1;
    // e.set(e.Eid,"Kanishk");
    // e.get();
    // e.getC("Udaipur","India");

    // string Car = "Scorpio";

    // cout << "G Var : " << ::Car << endl;
    // cout << "L Var : " << Car << endl;

    // Con C1;
    // Con C2(1500000, "Scorpio");

    //+++++++++++++ (REVISION : 3)

    // Worker W;
    // cout << "Worker Details" << endl;
    // W.Set(1,"Ramesh");
    // W.Get();
    // W.SG("Bihar","Uttar Pradesh");

    // string Car = "Scorpio";
    // cout << "LV : " << Car << endl;
    // cout << "GV : " << ::Car << endl;

    // MyCon C1;
    // MyCon C2("MLSU","Commerce");
    // MyCon C3(C2);
    // return 0;

    //+++++++++++++ (REVISION : 4)
    CStudent C;
    C.SetGet(1,"Meghna");
    C.Saddress("Udaipur", "Rajasthan");

    string B_color = "Green";

    cout << "L Var : " << B_color << endl;
    cout << "G Var :  " << ::B_color << endl;
}