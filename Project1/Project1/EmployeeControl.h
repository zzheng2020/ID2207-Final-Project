#include <iostream>
#include <string.h>

#ifndef EmployeeControl_h
#define EmployeeControl_h
#endif EmployeeControl_h

using namespace std;

class EmployeeControl {
public:
	bool logincheck(string usrID, string passWD);
	string rolecheck(string usrID);
};

bool EmployeeControl::logincheck(string usrID, string passWD) {
	cout << "test" << endl;
	cout << "input 1 or 0" << endl;
	int pan;
	cin >> pan;
	if (pan == 1) return 1;
	else return 0;
}

string EmployeeControl::rolecheck(string usrID) {
	cout << "test" << endl;
	cout << "input role" << endl;
	string pan = "";
	cin >> pan;
	return pan;
}

