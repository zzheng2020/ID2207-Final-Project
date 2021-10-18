#include <iostream>
#include <string.h>
#include "EmployeeControl.h"
#include "EventControl.h"
#include "FinancialControl.h"
#include "RecruitmentControl.h"
#include "TaskControl.h"
#include "Employee.h"
#include "Event.h"
#include "FinancialRequest.h"
#include "RecruitmentRequest.h"
#include "Task.h"
#include <vector>
#include <sstream>
#include <vector>
#include <fstream>
#include <string>
#include <filesystem>

#ifndef UsrInterface_h
#define UsrInterface_h
#endif UsrInterface_h

using namespace std;

class UsrInterface {
private:
    EmployeeControl employeeControl;
    EventControl eventControl;
    FinancialControl financialControl;
    RecruitmentControl recruitmentControl;
    TaskControl taskControl;
public:
    void login();
    void startlogin(string usrID);

    void customerServerPage(string usrID);
    void customerManagerAdminPage(string usrID);
    void financialManagerPage(string usrID);
    void hRManagerPage(string usrID);
    void departmentServerManagerPage(string usrID);
    void subTeamPage(string usrID);


    void eventOptionPage(string usrID);
    void financialOptionPage(string usrID);
    void recruitmentOptionPage(string usrID);
    void taskOptionPage(string usrID);

    void eventList();
    void financialRequestList();
    void recruitmentRequestList();
    void taskList();

    void eventPage(int ID);
    void financialPage(int ID);
    void recruitmentPage(int ID);
    void taskPage(int ID);

    void createEventPage(string usrID);
    void createFinancialPage(string usrID);
    void createRecruitmentPage(string usrID);
    void createTaskList(string usrID);
};

void UsrInterface::login() {
    string usrID, passWD;
    while (1) {
        cout << "*************************************" << endl;
        cout << "*************login page**************" << endl;
        cout << "please input usrID" << endl;
        cin >> usrID;
        cout << "please input passWD" << endl;
        cin >> passWD;
        if (employeeControl.logincheck(usrID, passWD)) {
           startlogin(usrID);
        }
        else {
            cout << "usrID or passWD wrong " << endl;
        }
    }
}

void UsrInterface::startlogin(string usrID) {
    string role = employeeControl.rolecheck(usrID);
    if(role =="CustomerServer") {
        customerServerPage(usrID);
    }
    else if (role == "CustomerManager") {
        customerManagerAdminPage(usrID);
    }
    else if (role == "FinancialManager") {
        financialManagerPage(usrID);
    }
    else if (role == "HRManager") {
        hRManagerPage(usrID);
    }
    else if (role == "AdminManager") {
        customerManagerAdminPage(usrID);
    }
    else if (role == "DepartmentManager") {
        departmentServerManagerPage(usrID);
    }
    else if (role == "ServiceManager") {
        departmentServerManagerPage(usrID);
    }
    else if (role == "Subteam") {
        subTeamPage(usrID);
    }
    else {
        cout << "function startlogin wrong" << endl;
    }
}

inline void UsrInterface::customerServerPage(string usrID) {
    int option;
    while (1) {
        cout << "*************************************" << endl;
        cout << "**************main page**************" << endl;
        cout << "usrID " << usrID << " choose your option:" << endl;
        cout << "1 for EventOption" << endl;
        cout << "2 for CreateEvent" << endl;
        cout << "9 for Exit" << endl;
        cin >> option;
        if (option == 1) {
            eventOptionPage(usrID);
        }
        else if (option == 2) {
            createEventPage(usrID);
        }
        else if (option == 9) {
            cout << "exit success" << endl;
            cout << "\n\n\n\n\n" << endl;
            break;
        }
        else {
            cout << "wrong option please try again !" << endl;
            cout << "\n\n" << endl;
        }
    }
}

void UsrInterface::customerManagerAdminPage(string usrID) {
    int option;
    while (1) {
        cout << "*************************************" << endl;
        cout << "**************main page**************" << endl;
        cout << "usrID " << usrID << " choose your option:" << endl;
        cout << "1 for EventOption" << endl;
        cout << "9 for Exit" << endl;
        cin >> option;
        if (option == 1) {
            eventOptionPage(usrID);
        }
        else if (option == 9) {
            cout << "exit success" << endl;
            cout << "\n\n\n\n\n" << endl;
            break;
        }
        else {
            cout << "wrong option please try again !" << endl;
            cout << "\n\n" << endl;
        }
    }
}

void UsrInterface::financialManagerPage(string usrID) {
    int option;
    while (1) {
        cout << "*************************************" << endl;
        cout << "**************main page**************" << endl;
        cout << "usrID " << usrID << " choose your option:" << endl;
        cout << "1 for EventOption" << endl;
        cout << "2 for FinancialRequestOption" << endl;
        cout << "9 for Exit" << endl;
        cin >> option;
        if (option == 1) {
            eventOptionPage(usrID);
        }
        else if (option == 2) {
            financialOptionPage(usrID);
        }
        else if (option == 9) {
            cout << "exit success" << endl;
            cout << "\n\n\n\n\n" << endl;
            break;
        }
        else {
            cout << "wrong option please try again !" << endl;
            cout << "\n\n" << endl;
        }
    }
}

void UsrInterface::hRManagerPage(string usrID) {
    int option;
    while (1) {
        cout << "*************************************" << endl;
        cout << "**************main page**************" << endl;
        cout << "usrID " << usrID << " choose your option:" << endl;
        cout << "1 for RecruitmentRequestOption" << endl;
        cout << "9 for Exit" << endl;
        cin >> option;
        if (option == 1) {
            recruitmentOptionPage(usrID);
        }
        else if (option == 9) {
            cout << "exit success" << endl;
            cout << "\n\n\n\n\n" << endl;
            break;
        }
        else {
            cout << "wrong option please try again !" << endl;
            cout << "\n\n" << endl;
        }
    }
}

inline void UsrInterface::departmentServerManagerPage(string usrID) {
    int option;
    while (1) {
        cout << "*************************************" << endl;
        cout << "**************main page**************" << endl;
        cout << "usrID " << usrID << " choose your option:" << endl;
        cout << "1 for TaskOption" << endl;
        cout << "2 for FinancialRequestOption" << endl;
        cout << "3 for RecruitmentRequestOption" << endl;
        cout << "4 for Createtask" << endl;
        cout << "5 for CreateFinancialRequest" << endl;
        cout << "6 for CreateRecruimentRequest" << endl;
        cout << "9 for Exit" << endl;
        cin >> option;
        if (option == 1) {
            taskOptionPage(usrID);
        }
        else if (option == 2) {
            financialOptionPage(usrID);
        }
        else if (option == 3) {
            recruitmentOptionPage(usrID);
        }
        else if (option == 4) {
            createTaskList(usrID);
        }
        else if (option == 5) {
            createFinancialPage(usrID);
        }
        else if (option == 6) {
            createRecruitmentPage(usrID);
        }
        else if (option == 9) {
            cout << "exit success" << endl;
            cout << "\n\n\n\n\n" << endl;
            break;
        }
        else {
            cout << "wrong option please try again !" << endl;
            cout << "\n\n" << endl;
        }
    }
}

inline void UsrInterface::subTeamPage(string usrID) {
    int option;
    while (1) {
        cout << "*************************************" << endl;
        cout << "**************main page**************" << endl;
        cout << "usrID " << usrID << " choose your option:" << endl;
        cout << "1 for TaskOption" << endl;
        cout << "9 for Exit" << endl;
        cin >> option;
        if (option == 1) {
            taskOptionPage(usrID);
        }
        else if (option == 9) {
            cout << "exit success" << endl;
            cout << "\n\n\n\n\n" << endl;
            break;
        }
        else {
            cout << "wrong option please try again !" << endl;
            cout << "\n\n" << endl;
        }
    }
}

void UsrInterface::eventOptionPage(string usrID) {
    int id;
    int option;
    string comment;
    cout << "*************************************" << endl;
    cout << "*********event option page**********" << endl;
    eventList();
    while (1) {
        cout << "*************************************" << endl;
        cout << "choose your function: " << endl;
        cout << "1 for view" << endl;
        cout << "9 for exit" << endl;
        cin >> option;
        if (option == 1) {
            cout << "input a page ID to view" << endl;
            cin >> id;
            // cout << eventControl.getState(id) << endl;

            if (eventControl.idcheck(id)) {
                eventPage(id);
                if (employeeControl.rolecheck(usrID) == "CustomerManager" && eventControl.getState(id) == "Create") {
                    cout << "1 for agree  2 for disagree else for exit" << endl;
                    cin >> option;
                    if (option == 1) {
                        eventControl.changestate(id, "Cusagree");
                    }
                    else if (option == 2) {
                        eventControl.changestate(id, "cancel");
                    }
                    else {

                    }
                }
                else if (employeeControl.rolecheck(usrID) == "AdminManager" && eventControl.getState(id) == "Fcomment") {
                    cout << "1 for agree  2 for disagree else for exit" << endl;
                    cin >> option;
                    if (option == 1) {
                        eventControl.changestate(id, "Aagree");
                    }
                    else if (option == 2) {
                        eventControl.changestate(id, "cancel");
                    }
                    else {

                    }
                }
                else if (employeeControl.rolecheck(usrID) == ("FinancialManager") && eventControl.getState(id) == "Cusagree") {
                    cout << "1 for comment  else for exit" << endl;
                    cin >> option;
                    if (option == 1) {
                        cout << "please write your comment" << endl;
                        cin >> comment;
                        eventControl.changestate(id, "fcomment");
                        eventControl.addFinancialComment(id, comment);
                    }
                    else {

                    }
                }
                else {
                    cout << "you can only look" << endl;
                }
                cout << "input anykey to go back " << endl;
                cin >> option;
                cout << "option finish" << endl;
            }
            else {
                cout << "ID not found!";
                cout << "\n\n" << endl;
            }
        }
        else if (option == 9) {
            cout << "exit success" << endl;
            cout << "\n\n\n\n\n" << endl;
            break;
        }
        else {
            cout << "wrong option please try again !" << endl;
            cout << "\n\n" << endl;
        }
    }
    cout << "*************************************" << endl;
} 


void UsrInterface::financialOptionPage(string usrID) {
    int id;
    int option;
    string comment;
    cout << "*************************************" << endl;
    cout << "**************financial option page**************" << endl;
    financialRequestList();
    while (1) {
        cout << "*************************************" << endl;
        cout << "choose your function: " << endl;
        cout << "1 for view" << endl;
        cout << "9 for exit" << endl;
        cin >> option;
        if (option == 1) {
            cout << "input a page ID to view" << endl;
            cin >> id;
            if (financialControl.idcheck(id)) {
                financialPage(id);
                if (employeeControl.rolecheck(usrID) == "FinancialManager" && financialControl.getState(id) == "panding") {
                    cout << "1 for agree  else for continue pending" << endl;
                    cin >> option;
                    if (option == 1) {
                        cout << "please write your comment" << endl;
                        cin >> comment;
                        financialControl.changestate(id, "agree");
                        financialControl.addComment(id, comment);
                    }
                    else {
                        
                    }
                }
                else {
                    cout << "you can only look" << endl;
                }
                cout << "input anykey to go back " << endl;
                cin >> option;
                cout << "option finish" << endl;
            }
            else {
                cout << "ID not found!";
                cout << "\n\n" << endl;
            }
        }
        else if (option == 9) {
            cout << "exit success" << endl;
            cout << "\n\n\n\n\n" << endl;
            break;
        }
        else {
            cout << "wrong option please try again !" << endl;
            cout << "\n\n" << endl;
        }
    }
    cout << "*************************************" << endl;
}

void UsrInterface::recruitmentOptionPage(string usrID) {
    int id;
    int option;
    string comment;
    cout << "*************************************" << endl;
    cout << "**************recruitment option page**************" << endl;
    recruitmentRequestList();
    while (1) {
        cout << "*************************************" << endl;
        cout << "choose your function: " << endl;
        cout << "1 for view" << endl;
        cout << "9 for exit" << endl;
        cin >> option;
        if (option == 1) {
            cout << "input a page ID to view" << endl;
            cin >> id;
            if (recruitmentControl.idcheck(id)) {
                recruitmentPage(id);
                if (employeeControl.rolecheck(usrID) == "HRManager" && recruitmentControl.getState(id) == "panding") {
                    cout << "1 for agree  else for continue pending" << endl;
                    cin >> option;
                    if (option == 1) {
                        cout << "please write your comment" << endl;
                        cin >> comment;
                        recruitmentControl.changestate(id, "agree");
                        recruitmentControl.addComment(id, comment);
                    }
                    else {

                    }
                }
                else {
                    cout << "you can only look" << endl;
                }
                cout << "input anykey to go back " << endl;
                cin >> option;
                cout << "option finish" << endl;
            }
            else {
                cout << "ID not found!";
                cout << "\n\n" << endl;
            }
        }
        else if (option == 9) {
            cout << "exit success" << endl;
            cout << "\n\n\n\n\n" << endl;
            break;
        }
        else {
            cout << "wrong option please try again !" << endl;
            cout << "\n\n" << endl;
        }
    }
    cout << "*************************************" << endl;
}

inline void UsrInterface::taskOptionPage(string usrID) {
    int id;
    int option;
    string comment;
    cout << "********************************************" << endl;
    cout << "**************task option page**************" << endl;
    taskList();
    while (1) {
        cout << "*************************************" << endl;
        cout << "choose your function: " << endl;
        cout << "1 for view" << endl;
        cout << "9 for exit" << endl;
        cin >> option;
        if (option == 1) {
            cout << "input a page ID to view" << endl;
            cin >> id;
            if (taskControl.idcheck(id)) {
                taskPage(id);
                if ((employeeControl.rolecheck(usrID) == "DepartmentManager"|| employeeControl.rolecheck(usrID) == "ServiceManager")&& taskControl.getState(id) == "panding") {
                    cout << "1 for agree  else for continue pending" << endl;
                    cin >> option;
                    if (option == 1) {
                        cout << "please write your comment" << endl;
                        cin >> comment;
                        taskControl.changestate(id, "agree");
                        taskControl.addComment(id, comment);
                    }
                    else {

                    }
                }
                else {
                    cout << "you can only look" << endl;
                }
                cout << "input anykey to go back " << endl;
                cin >> option;
                cout << "option finish" << endl;
            }
            else {
                cout << "ID not found!";
                cout << "\n\n" << endl;
            }
        }
        else if (option == 9) {
            cout << "exit success" << endl;
            cout << "\n\n\n\n\n" << endl;
            break;
        }
        else {
            cout << "wrong option please try again !" << endl;
            cout << "\n\n" << endl;
        }
    }
    cout << "*************************************" << endl;
}

inline void UsrInterface::eventList() {
    cout << "test eventList" << endl;
	std::string path = "/Users/zhangziheng/OneDrive/KTH/ID2207 HT211 Modern Methods in Software Engineering/ID2207-Final-Project/Project1/Project1/EventList/";
    for (const auto & entry : std::filesystem::directory_iterator(path))
    {
        // std::cout << entry.path() << std::endl;
        string filePath = entry.path();
        int idx = filePath.find("Event");
        for (int i = idx; i < filePath.size(); i++)
        {
            cout << filePath[i];
        }
        cout << endl;
    }
}

inline void UsrInterface::financialRequestList() {
    cout << "test financialRequestList" << endl;
}

inline void UsrInterface::recruitmentRequestList() {
    cout << "test recruimentRequestList" << endl;
}

inline void UsrInterface::taskList() {
    cout << "test taskList" << endl;
}

inline void UsrInterface::eventPage(int ID) {
    cout << "eventPage" << endl;
    string EventFileLocation = "/Users/zhangziheng/OneDrive/KTH/ID2207 HT211 Modern Methods in Software Engineering/ID2207-Final-Project/Project1/Project1/EventList/";
    EventFileLocation = EventFileLocation + "Event" + to_string(ID) + ".txt";
    ifstream myfile(EventFileLocation);
    while (!myfile.eof())
    {
        string tmp = "";
        myfile >> tmp;
        cout << tmp << endl;
    }
    myfile.close();
}

inline void UsrInterface::financialPage(int ID) {
    cout << " test FinancialPage" << endl;
}

inline void UsrInterface::recruitmentPage(int ID) {
    cout << "test RecruimentPage" << endl;
}

inline void UsrInterface::taskPage(int ID) {
    cout << "test TaskPage" << endl;
}

inline void UsrInterface::createEventPage(string usrID){
    int id, clientid, expectedBudget,option;
    string clientName, eventType, beginDate, endDate, preference, comment, description;
    cout << "*************************************" << endl;
    cout << "**************create Event Page**************" << endl;
    cout << "id" << endl; cin >> id;
    cout << "client id" << endl; cin >> clientid;
    cout << "client name" << endl; cin >> clientName;
    cout << "event type" << endl; cin >> eventType;
    cout << "begin date" << endl; cin >> beginDate;
    cout << "end date" << endl; cin >> endDate;
    cout << "preference" << endl; cin >> preference;
    cout << "expect budget" << endl; cin >> expectedBudget;
    cout << "comment" << endl; cin >> comment;
    cout << "description" << endl; cin >> description;
    eventControl.create(id, clientid, clientName, eventType, beginDate, endDate, preference, expectedBudget, comment, description);
    cout << "done" << endl;
    cout << "press any key to exit" << endl;
    cin >> option;
}

inline void UsrInterface::createFinancialPage(string usrID) {
    int id, eventid, amount,option;
    string requestdepartment, reason, comment;
    cout << "*************************************" << endl;
    cout << "**************create financial Page**************" << endl;
    cout << "id" << endl; cin >> id;
    cout << "request department" << endl; cin >> requestdepartment;
    cout << "eventid" << endl; cin >> eventid;
    cout << "amount" << endl; cin >> amount;
    cout << "reason" << endl; cin >> reason;
    cout << "comment" << endl; cin >> comment;
    financialControl.create(id, requestdepartment, eventid, amount, reason, comment);
    cout << "done" << endl;
    cout << "press any key to exit" << endl;
    cin >> option;
}

inline void UsrInterface::createRecruitmentPage(string usrID) {
    int id, yearofwork, option;
    string requestdepartment, contracttype,jobtitle,description, comment;
    cout << "*************************************" << endl;
    cout << "**************create Recruitment Page**************" << endl;
    cout << "id" << endl; cin >> id;
    cout << "request department" << endl; cin >> requestdepartment;
    cout << "contract type" << endl; cin >> contracttype;
    cout << "year of experience" << endl; cin >> yearofwork;
    cout << "job title" << endl; cin >> jobtitle;
    cout << "description" << endl; cin >> description;
    cout << "comment" << endl; cin >> comment;
    recruitmentControl.create(id, requestdepartment, contracttype, yearofwork, jobtitle, description,comment);
    cout << "done" << endl;
    cout << "press any key to exit" << endl;
    cin >> option;
}

inline void UsrInterface::createTaskList(string usrID) {
    int option,id,eventid, employeeid,budget,senderid;
    string employeename, subject, description, department, priority, plan, comment;
    cout << "*************************************" << endl;
    cout << "**************create Event Page**************" << endl;
    cout << "id" << endl; cin >> id;
    cout << "event id" << endl; cin >> eventid;
    cout << "employee id" << endl; cin >> employeeid;
    cout << "employee name" << endl; cin >> employeename;
    cout << "subject" << endl; cin >> subject;
    cout << "description" << endl; cin >> description;
    cout << "senderid" << endl; cin >> senderid;
    cout << "budget" << endl; cin >> budget;
    cout << "department" << endl; cin >> department;
    cout << "priority" << endl; cin >> priority;
    cout << "plan" << endl; cin >> plan;
    cout << "comment" << endl; cin >> comment;
    taskControl.create(id, eventid, employeeid, employeename, subject, description, senderid, budget, department, priority, plan, comment);
    cout << "done" << endl;
    cout << "press any key to exit" << endl;
    cin >> option;
}

