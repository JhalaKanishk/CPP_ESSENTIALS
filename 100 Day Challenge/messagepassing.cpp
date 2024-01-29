#include<iostream>
using namespace std;

class Lucky_generator{
    public:
        int lucky_number;
        void get_luckyNumber() {
            lucky_number = rand() % 100;
            cout << "Whose lucky Number is: " << lucky_number << endl;
        }
};

class Student{
    private:
        string ninja_name;
        int ninja_id;
    public:
        void Ninja(string name, int id) {
            ninja_name = name;
            ninja_id = id;
        }
        void call_luckyNumber(Lucky_generator &Number) { // Pass by reference
            cout << "S name is: " << ninja_name << endl;
            cout << "S id: " << ninja_id << endl;
            Number.get_luckyNumber();
        }
};

int main(){
    Student s;
    s.Ninja("Kanishk", 52);
    Lucky_generator l;
    s.call_luckyNumber(l);
}