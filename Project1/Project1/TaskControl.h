#pragma once
#include <iostream>
#include <string.h>
#include <fstream>
#include <vector>
#include <unistd.h>

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
	void changeWorkPlan(int id, string comment);
	void create(int id, int eventid, int employeeid, string employeename, string subject, string description, int senderid, int budget, string department, string priority, string plan, string comment);
};

void TaskControl::changeWorkPlan(int id, string comment) {
	string EventFileLocation = "/Users/zhangziheng/OneDrive/KTH/ID2207 HT211 Modern Methods in Software Engineering/ID2207-Final-Project/Project1/Project1/Task/";
	EventFileLocation = EventFileLocation + "Task" + to_string(id) + ".txt";
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
        if (it.find("state:") != string::npos) {
            outfile << it << endl;
            outfile << "WorkPlan:" << comment << endl;
        }
        else outfile << it << endl;
    }
	myfile.close();
    outfile.close();
}

bool TaskControl::idcheck(int id) {
	// cout << "test TaskControl" << endl;
	// int pan;
	// cin >> pan;
	// return 1;
	string EventFileLocation = "/Users/zhangziheng/OneDrive/KTH/ID2207 HT211 Modern Methods in Software Engineering/ID2207-Final-Project/Project1/Project1/Task/";
	EventFileLocation += "Task" + to_string(id) + ".txt";
    const char *file = EventFileLocation.c_str();
    int res = access(file, R_OK);
	if (res < 0) return false;
	return true;
}

inline string TaskControl::getState(int id)
{
	cout << "test TaskControl" << endl;
	string state;
	// cout << "test EventControl" << endl;
	// path of event.txt file
	string EventFileLocation = "/Users/zhangziheng/OneDrive/KTH/ID2207 HT211 Modern Methods in Software Engineering/ID2207-Final-Project/Project1/Project1/Task/";
	EventFileLocation = EventFileLocation + "Task" + to_string(id) + ".txt";
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

inline void TaskControl::changestate(int id, string state) {
	cout << "test TaskControl" << endl;
	// path of event.txt file
	string EventFileLocation = "/Users/zhangziheng/OneDrive/KTH/ID2207 HT211 Modern Methods in Software Engineering/ID2207-Final-Project/Project1/Project1/Task/";
	EventFileLocation = EventFileLocation + "Task" + to_string(id) + ".txt";
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

inline void TaskControl::addComment(int id, string comment) {
	cout << "test TaskComment" << endl;
	string EventFileLocation = "/Users/zhangziheng/OneDrive/KTH/ID2207 HT211 Modern Methods in Software Engineering/ID2207-Final-Project/Project1/Project1/Task/";
	EventFileLocation = EventFileLocation + "Task" + to_string(id) + ".txt";
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

inline void TaskControl::create(int id, int eventid, int employeeid, string employeename, string subject, string description, int senderid, int budget, string department, string priority, string plan, string comment)
{
	cout << "test TaskCreate" << endl;
	// path of event.txt file
	string EventFileLocation = "/Users/zhangziheng/OneDrive/KTH/ID2207 HT211 Modern Methods in Software Engineering/ID2207-Final-Project/Project1/Project1/Task/";
	string FileId = to_string(id);
	EventFileLocation = EventFileLocation + "Task" + FileId + ".txt";
	ofstream outfile(EventFileLocation, ios::trunc);
	outfile << "beginId:" << id << " ====================" << endl;
	outfile << "id:" << id << endl;
	outfile << "eventid:" << eventid << endl;
	outfile << "employeeid:" << employeeid << endl;
	outfile << "employeename:" << employeename << endl;
	outfile << "subject:" << subject << endl;
	outfile << "description:" << description << endl;
	outfile << "senderid:" << senderid << endl;
	outfile << "budget:" << budget << endl;
	outfile << "department:" << department << endl;
	outfile << "priority:" << priority << endl;
	outfile << "plan:" << plan << endl;
	outfile << "comment:" << comment << endl;
	outfile << "state:panding" << endl;
	outfile << "end ====================" << endl;
}
