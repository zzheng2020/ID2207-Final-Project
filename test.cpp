#include <iostream>
#include <vector>
#include <string.h>
#include <sstream>
#include <vector>
#include <fstream>
#include <string>
#include <filesystem>

using namespace std;

string ReturnState()
{
    int id = 123;
    string EventFileLocation = "/Users/zhangziheng/OneDrive/KTH/ID2207 HT211 Modern Methods in Software Engineering/ID2207-Final-Project/Project1/Project1/Task/";
	EventFileLocation = EventFileLocation + "Task" + to_string(id) + ".txt";
	ifstream myfile(EventFileLocation);
    string state = "";
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

void ChangeState()
{
    int id = 123;
    string EventFileLocation = "/Users/zhangziheng/OneDrive/KTH/ID2207 HT211 Modern Methods in Software Engineering/ID2207-Final-Project/Project1/Project1/Task/";
	EventFileLocation = EventFileLocation + "Task" + to_string(id) + ".txt";
	ifstream myfile(EventFileLocation);
    vector<string> save;
    string state = "";
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

void Create(int id, int clientid, string clientname, string eventtype, string begindate, string enddate, string preference, int expectbudget,  string comment, string description)
{
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

void AddComment(int id, string comment) {
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

int main()
{
    int ID = 123;
    string EventFileLocation = "/Users/zhangziheng/OneDrive/KTH/ID2207 HT211 Modern Methods in Software Engineering/ID2207-Final-Project/Project1/Project1/Recruitment/";
    EventFileLocation = EventFileLocation + "Recruitment" + to_string(ID) + ".txt";
    ifstream myfile(EventFileLocation);
    while (!myfile.eof())
    {
        string tmp = "";
        myfile >> tmp;
        cout << tmp << endl;
    }
    myfile.close();
    return 0;

}