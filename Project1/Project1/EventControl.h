#pragma once
#include <iostream>
#include <string.h>

#ifndef EventControl_h
#define EventControl_h
#endif EventControl_h

using namespace std;
class EventControl {
public:
	bool idcheck(int id);
	string getState(int id);
	void changestate(int id, string state);
	void addFinancialComment(int id, string comment);
	void create(int id ,int clientid,string clientname,string eventtype,string begindate,string enddate,string preference,int expectbudget,string status,string description);
};

bool EventControl::idcheck(int id) {
	cout << "test EventControl" << endl;
	int pan;
	cin >> pan;
	if (pan == 1) return 1;
	else return 0;
}

inline string EventControl::getState(int id) {
	cout << "test EventControl" << endl;
	string state;
	cin >> state;
	return state;
}

inline void EventControl::changestate(int id, string state) {
	cout << "test EventControl" << endl;
}

inline void EventControl::addFinancialComment(int id, string comment) {
	cout << "test addFinancialComment " << endl;
}
inline void EventControl::create(int id, int clientid, string clientname, string eventtype, string begindate, string enddate, string preference, int expectbudget,  string comment, string description)
{
	cout << "test EventCreate" << endl;
}


