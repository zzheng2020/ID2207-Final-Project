#include <iostream>
#include <string.h>

using namespace std;

class Employee {
    public:
        int    getId();
        void   setId(int id);

        string getName();
        void   setName(string name);

        string getDepartment();
        void   setDepartment(string department);
        
        string getRole();
        void   setRole(string role);

    private:
        int id;
        string name;
        string password;
        string department;
        string role;
};

int Employee::getId() {
    return id;
}

void Employee::setId(int id) {
    this->id = id;
}

string Employee::getName() {
    return name;
}

void Employee::setName(string name) {
    this->name = name;
}

string Employee::getDepartment() {
    return department;
}

void Employee::setDepartment(string department) {
    this->department = department;
}

string Employee::getRole() {
    return role;
}

void Employee::setRole(string role) {
    this->role = role;
}

int main() {
    Employee test;
    test.setId(123);
    cout << test.getId() << endl;

}