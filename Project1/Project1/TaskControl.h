#pragma once
#include <iostream>
#include <string.h>

#ifndef TaskControl_h
#define TaskControl_h
#endif TaskControl_h

using namespace std;
class TaskControl {
public:
	bool idcheck(int id);
	string getState(int id);
	void changestate(int id, string state);
	void addComment(int id, string comment);
	void create(int id, int eventid, int employeeid, string employeename, string subject, string description, int senderid, int budget, string department, string priority, string plan, string comment);
};

bool TaskControl::idcheck(int id) {
	cout << "test TaskControl" << endl;
	int pan;
	cin >> pan;
	if (pan == 1) return 1;
	else return 0;
}

inline string TaskControl::getState(int id)
{
	cout << "test TaskControl" << endl;
	string state;
	cin >> state;
	return state;
}

inline void TaskControl::changestate(int id, string state) {
	cout << "test TaskControl" << endl;
}

inline void TaskControl::addComment(int id, string comment) {
	cout << "test TaskComment" << endl;
}

inline void TaskControl::create(int id, int eventid, int employeeid, string employeename, string subject, string description, int senderid, int budget, string department, string priority, string plan, string comment)
{
	cout << "test TaskCreate" << endl;
}
