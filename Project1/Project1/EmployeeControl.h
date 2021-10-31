#include <iostream>
#include <string.h>
#include <fstream>
#include <vector>

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
	// cout << "test" << endl;
	// cout << "input 1 or 0" << endl;
	// int pan;
	// cin >> pan;
	// if (pan == 1) return 1;
	// else return 0;
	string EventFileLocation = "/Users/zhangziheng/OneDrive/KTH/ID2207 HT211 Modern Methods in Software Engineering/ID2207-Final-Project/Project1/Project1/RoleCheck/RoleCheck.txt";
	fstream f(EventFileLocation);
	vector<string> roles;
	string line;
	while (getline(f, line))
	{
		roles.push_back(line);
	}

	for (auto it : roles)
	{
		if (it.find(usrID) != string::npos && it.find(passWD) != string::npos) return true;	
	}

	return false;
}

string EmployeeControl::rolecheck(string usrID) {
	// cout << "test" << endl;
	// cout << "input role" << endl;
	// string pan = "";
	// cin >> pan;
	string EventFileLocation = "/Users/zhangziheng/OneDrive/KTH/ID2207 HT211 Modern Methods in Software Engineering/ID2207-Final-Project/Project1/Project1/RoleCheck/RoleCheck.txt";
	fstream f(EventFileLocation);
	vector<string> roles;
	string line;
	while (getline(f, line))
	{
		roles.push_back(line);
	}

	string current_role = "";
	for (auto it : roles)
	{
		bool flag = false;
		if (it.find("role:") != string::npos && it.find(usrID) != string::npos)
		{
			// cout << it.find("role:") << endl;
			// cout << it[it.find("role:")] << endl;
			int idx = it.find("role:");
			for (int i = idx + 5; i < it.size(); i++)
			{
				current_role += it[i];
			}
			flag = true;
		}

		if (flag) break;
	}
	cout << current_role << endl;
	return current_role;
}

