#pragma once
#include <iostream>
#include <string.h>
#include <fstream>
#include <vector>
#include <unistd.h>

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
	// cout << "test FinancialControl" << endl;
	// int pan;
	// cin >> pan;
	// return 1;
	string EventFileLocation = "/Users/zhangziheng/OneDrive/KTH/ID2207 HT211 Modern Methods in Software Engineering/ID2207-Final-Project/Project1/Project1/FinancialList/";
	EventFileLocation += "Financial" + to_string(id) + ".txt";
    const char *file = EventFileLocation.c_str();
    int res = access(file, R_OK);
	if (res < 0) return false;
	return true;
}

inline string FinancialControl::getState(int id)
{
	cout << "test FinancialControl" << endl;
	string state;
	// cout << "test EventControl" << endl;
	// path of event.txt file
	string EventFileLocation = "/Users/zhangziheng/OneDrive/KTH/ID2207 HT211 Modern Methods in Software Engineering/ID2207-Final-Project/Project1/Project1/FinancialList/";
	EventFileLocation = EventFileLocation + "Financial" + to_string(id) + ".txt";
	ifstream myfile(EventFileLocation);
	while (!myfile.eof())
	{
		string tmp = "";
		myfile >> tmp;
		if (tmp.find("state:") != std::string::npos)
		{
			for (int i = tmp.find("state:") + 6; i < tmp.size(); i++)
			{
				state += tmp[i];
			}
		}
	}
	myfile.close();
	return state;
}

inline void FinancialControl::changestate(int id, string state) {
	cout << "test FinancialControl" << endl;
	string EventFileLocation = "/Users/zhangziheng/OneDrive/KTH/ID2207 HT211 Modern Methods in Software Engineering/ID2207-Final-Project/Project1/Project1/FinancialList/";
	EventFileLocation = EventFileLocation + "Financial" + to_string(id) + ".txt";
	ifstream myfile(EventFileLocation);
    vector<string> save;
    while (!myfile.eof())
    {
        string tmp = "";
        myfile >> tmp;
        save.push_back(tmp);
    }
	ofstream outfile(EventFileLocation, ios::trunc);
    for (auto it : save)
    {
        if (it.find("state") == string::npos)
        {
            outfile << it << endl;
        }
        else
        {
            outfile << "state:" << state << endl;
        }
    }


	myfile.close();
    outfile.close();
}

inline void FinancialControl::addComment(int id, string comment) {
	cout << "test addFinancialComment" << endl;
	string EventFileLocation = "/Users/zhangziheng/OneDrive/KTH/ID2207 HT211 Modern Methods in Software Engineering/ID2207-Final-Project/Project1/Project1/FinancialList/";
	EventFileLocation = EventFileLocation + "Financial" + to_string(id) + ".txt";
	ifstream myfile(EventFileLocation);
    vector<string> save;
    while (!myfile.eof())
    {
        string tmp = "";
        myfile >> tmp;
        save.push_back(tmp);
    }
	ofstream outfile(EventFileLocation, ios::trunc);
    for (auto it : save)
    {
        if (it.find("comment:") == string::npos)
        {
            outfile << it << endl;
        }
        else
        {
            outfile << "comment:" << comment << endl;
        }
    }


	myfile.close();
    outfile.close();
}

inline void FinancialControl::create(int id, string requestdepartment, int eventid, int amount, string reason, string comment)
{
	cout << "test Financialcreate" << endl;
	// path of event.txt file
	string EventFileLocation = "/Users/zhangziheng/OneDrive/KTH/ID2207 HT211 Modern Methods in Software Engineering/ID2207-Final-Project/Project1/Project1/FinancialList/";
	string FileId = to_string(id);
	EventFileLocation = EventFileLocation + "Financial" + FileId + ".txt";
	ofstream outfile(EventFileLocation, ios::trunc);
	outfile << "beginId:" << id << " ====================" << endl;
	outfile << "id:" << id << endl;
	outfile << "requestdepartment:" << requestdepartment << endl;
	outfile << "eventid:" << eventid << endl;
	outfile << "amount:" << amount << endl;
	outfile << "reason:" << reason << endl;
	outfile << "comment:" << comment << endl;
	outfile << "state:panding" << endl;
	outfile << "end ====================" << endl;
	outfile.close();
}
