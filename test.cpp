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