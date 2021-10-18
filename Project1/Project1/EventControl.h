#pragma once
#include <iostream>
#include <string.h>
#include <fstream>
#include <vector>

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
	return 1;
}

inline string EventControl::getState(int id) {
	cout << "getState" << endl;
	string state;
	// cout << "test EventControl" << endl;
	// path of event.txt file
	string EventFileLocation = "/Users/zhangziheng/OneDrive/KTH/ID2207 HT211 Modern Methods in Software Engineering/ID2207-Final-Project/Project1/Project1/EventList/";
	EventFileLocation = EventFileLocation + "Event" + to_string(id) + ".txt";
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

inline void EventControl::changestate(int id, string state) {
	cout << "test EventControl" << endl;
	// path of event.txt file
	string EventFileLocation = "/Users/zhangziheng/OneDrive/KTH/ID2207 HT211 Modern Methods in Software Engineering/ID2207-Final-Project/Project1/Project1/EventList/";
	EventFileLocation = EventFileLocation + "Event" + to_string(id) + ".txt";
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

inline void EventControl::addFinancialComment(int id, string comment) {
	cout << "test addFinancialComment " << endl;
}
inline void EventControl::create(int id, int clientid, string clientname, string eventtype, string begindate, string enddate, string preference, int expectbudget,  string comment, string description)
{
	cout << "test EventCreate" << endl;
	// path of event.txt file
	string EventFileLocation = "/Users/zhangziheng/OneDrive/KTH/ID2207 HT211 Modern Methods in Software Engineering/ID2207-Final-Project/Project1/Project1/EventList/";
	string FileId = to_string(id);
	EventFileLocation = EventFileLocation + "Event" + FileId + ".txt";
	ofstream outfile(EventFileLocation, ios::trunc);
	outfile << "beginId:" << id << " ====================" << endl;
	outfile << "id:" << id << endl;
	outfile << "clientid:" << clientid << endl;
	outfile << "clientname:" << clientname << endl;
	outfile << "eventtype:" << eventtype << endl;
	outfile << "begindate:" << begindate << endl;
	outfile << "eventdate:" << enddate << endl;
	outfile << "preference:" << preference << endl;
	outfile << "expectbudget:" << expectbudget << endl;
	outfile << "comment:" << comment << endl;
	outfile << "description:" << description << endl;
	outfile << "state:Create" << endl;
	outfile << "end ====================" << endl;
	outfile.close();
}


