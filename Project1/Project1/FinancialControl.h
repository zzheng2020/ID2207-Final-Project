#pragma once
#include <iostream>
#include <string.h>

#ifndef FinancialControl_h
#define FinancialControl_h
#endif FinancialControl_h

using namespace std;
class FinancialControl {
public:
	bool idcheck(int id);
	string getState(int id);
	void changestate(int id, string state);
	void addComment(int id, string comment);
	void create(int id,string requestdepartment,int eventid, int amount,string reason,string comment);
};

bool FinancialControl::idcheck(int id) {
	cout << "test FinancialControl" << endl;
	int pan;
	cin >> pan;
	if (pan == 1) return 1;
	else return 0;
}

inline string FinancialControl::getState(int id)
{
	cout << "test FinancialControl" << endl;
	string state;
	cin >> state;
	return state;
}

inline void FinancialControl::changestate(int id, string state) {
	cout << "test FinancialControl" << endl;
}

inline void FinancialControl::addComment(int id, string comment) {
	cout << "test addFinancialComment" << endl;
}

inline void FinancialControl::create(int id, string requestdepartment, int eventid, int amount, string reason, string comment)
{
	cout << "test Financialcreate" << endl;
}
