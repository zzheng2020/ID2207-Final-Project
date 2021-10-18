#pragma once
#include <iostream>
#include <string.h>
#include <fstream>
#include <vector>

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
	return 1;
}

inline string RecruitmentControl::getState(int id)
{
	cout << "test RecruimentControl" << endl;
	string state;
	// cout << "test EventControl" << endl;
	// path of event.txt file
	string EventFileLocation = "/Users/zhangziheng/OneDrive/KTH/ID2207 HT211 Modern Methods in Software Engineering/ID2207-Final-Project/Project1/Project1/Recruitment/";
	EventFileLocation = EventFileLocation + "Recruitment" + to_string(id) + ".txt";
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

inline void RecruitmentControl::changestate(int id, string state) {
	cout << "test RecruitmentControl" << endl;
	// path of event.txt file
	string EventFileLocation = "/Users/zhangziheng/OneDrive/KTH/ID2207 HT211 Modern Methods in Software Engineering/ID2207-Final-Project/Project1/Project1/Recruitment/";
	EventFileLocation = EventFileLocation + "Recruitment" + to_string(id) + ".txt";
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

inline void RecruitmentControl::addComment(int id, string comment) {
	cout << "test addRecruitmentComment" << endl;
	string EventFileLocation = "/Users/zhangziheng/OneDrive/KTH/ID2207 HT211 Modern Methods in Software Engineering/ID2207-Final-Project/Project1/Project1/Recruitment/";
	EventFileLocation = EventFileLocation + "Recruitment" + to_string(id) + ".txt";
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
        if (it.find("comment") == string::npos)
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

inline void RecruitmentControl::create(int id, string requestdepartment, string contracttype, int yearofwork, string jobtitle, string description,  string comment)
{
	cout << "test createRecruitmentRequest" << endl;
	// path of event.txt file
	string EventFileLocation = "/Users/zhangziheng/OneDrive/KTH/ID2207 HT211 Modern Methods in Software Engineering/ID2207-Final-Project/Project1/Project1/Recruitment/";
	string FileId = to_string(id);
	EventFileLocation = EventFileLocation + "Recruitment" + FileId + ".txt";
	ofstream outfile(EventFileLocation, ios::trunc);
	outfile << "beginId:" << id << " ====================" << endl;
	outfile << "id:" << id << endl;
	outfile << "requestdepartment:" << requestdepartment << endl;
	outfile << "contracttype:" << contracttype << endl;
	outfile << "yearofwork:" << yearofwork << endl;
	outfile << "jobtitle:" << jobtitle << endl;
	outfile << "description:" << description << endl;
	outfile << "comment:" << comment << endl;
	outfile << "state:panding" << endl;
	outfile << "end ====================" << endl;
	outfile.close();
}
