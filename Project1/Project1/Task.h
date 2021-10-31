#pragma once
#include <iostream>
#include <string.h>

#ifndef Task_h
#define Task_h
#endif Task_h

using namespace std;

class Task
{
public:
    int    getId() { return id; };
    void   setId(int id) { this->id = id; };

    int    getEventId() { return eventId; };
    void   setEventId(int eventId) { this->eventId = eventId; };

    int    getEmployeeId() { return employeeId; };
    void   setEmployeeId(int employeeId) { this->employeeId = employeeId; };

    string getEmployeeName() { return employeeName; };
    void   setEmployeeName(string employeeName) { this->employeeName = employeeName; };

    string getSubject() { return subject; };
    void   setSubject(string subject) { this->subject = subject; };

    string getDescription() { return description; };
    void   setDescription(string description) { this->description = description; };

    int    getSenderId() { return senderId; };
    void   setSenderId(int senderId) { this->senderId = senderId; };

    int    getBudget() { return budget; };
    void   setBudget(int budget) { this->budget = budget; };

    string getDepartment() { return department; };
    void   setDepartment(string department) { this->department = department; };

    string getPriority() { return priority; };
    void   setPriority(string priority) { this->priority = priority; };

    string getPlan() { return plan; };
    void   setPlan(string plan) { this->plan = plan; };

    string getComment() { return comment; };
    void   setComment(string comment) { this->comment = comment; };

    string getStatus() { return status; };
    void   setStatus(string status) { this->status = status; };

private:
    int id;
    int eventId;
    int employeeId;
    string employeeName;
    string subject;
    string description;
    int senderId;
    int budget;
    string department;
    string priority;
    string plan;
    string comment;
    string status;
    string workplan;
};