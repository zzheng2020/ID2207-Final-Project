#pragma once
#include <iostream>
#include <string.h>

#ifndef RecruimentControl_h
#define RecruimentControl_h
#endif RecruimentControl_h

using namespace std;
class RecruitmentControl {
public:
	bool idcheck(int id);
	string getState(int id);
	void changestate(int id, string state);
	void addComment(int id, string comment);
	void create(int id, string requestdepartment, string contracttype, int yearofwork, string jobtitle, string description,  string comment);
};

bool RecruitmentControl::idcheck(int id) {
	cout << "test RecruimentControl" << endl;
	int pan;
	cin >> pan;
	if (pan == 1) return 1;
	else return 0;
}

inline string RecruitmentControl::getState(int id)
{
	cout << "test RecruimentControl" << endl;
	string state;
	cin >> state;
	return state;
}

inline void RecruitmentControl::changestate(int id, string state) {
	cout << "test RecruitmentControl" << endl;
}

inline void RecruitmentControl::addComment(int id, string comment) {
	cout << "test addRecruitmentComment" << endl;
}

inline void RecruitmentControl::create(int id, string requestdepartment, string contracttype, int yearofwork, string jobtitle, string description,  string comment)
{
	cout << "test createRecruitmentRequest" << endl;
}
