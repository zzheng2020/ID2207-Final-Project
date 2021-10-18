#include <iostream>
#include <vector>
#include <string.h>
#include <sstream>
#include <vector>
#include <fstream>
#include <string>
#include <filesystem>

using namespace std;
int main()
{
    int id = 123;
    string state = "";
	// path of event.txt file
	string EventFileLocation = "/Users/zhangziheng/OneDrive/KTH/ID2207 HT211 Modern Methods in Software Engineering/ID2207-Final-Project/Project1/Project1/EventList/";
	EventFileLocation = EventFileLocation + "Event" + to_string(id) + ".txt";
	ifstream myfile(EventFileLocation);
	while (!myfile.eof())
	{
		string tmp = "";
		myfile >> tmp;
        cout << tmp << endl;
		if (tmp.find("state:") != std::string::npos)
		{
            cout << tmp.find("state:") << endl;
			for (int i = tmp.find("state:") + 6; i < tmp.size(); i++)
			{
				state += tmp[i];
			}
		}
	}
    cout << state << endl;
	myfile.close();
    return 0;

}