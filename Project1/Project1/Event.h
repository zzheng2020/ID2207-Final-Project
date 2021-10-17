#pragma once
#include <iostream>
#include <string.h>

#ifndef Event_h
#define Event_h
#endif Event_h

using namespace std;

class Event
{
    int getId();
    void setId(int id);

    int getClientId();
    void setClientId(int id);

    string getClientName();
    void setClientName(string name);

    string getEventType();
    void setEventTpye(string eventType);

    string getBeginDate();
    void setBeginDate(string beginDate);

    string getEndDate();
    void setEndDate(string endDate);

    string getPreference();
    void setPreference(string preference);

    int getExpectedBudget();
    void setExpectedBudget(int expextedBudget);

    string getStatus();
    void setStatus(string status);

    string getComment();
    void setComment(string comment);

    string getDescription();
    void setDescription(string description);

private:
    int id;
    int clientId;
    string clientName;
    string eventType;
    string beginDate;
    string endDate;
    string preference;
    int expectedBudget;
    string status;
    string comment;
    string description;
};

int Event::getId()
{
    return id;
}

void Event::setId(int id)
{
    this->id = id;
}

int Event::getClientId()
{
    return clientId;
}

void Event::setClientId(int id)
{
    this->id = id;
}

string Event::getClientName()
{
    return clientName;
}

void Event::setClientName(string clientName)
{
    this->clientName = clientName;
}

string Event::getEventType()
{
    return eventType;
}

void Event::setEventTpye(string eventType)
{
    this->eventType = eventType;
}

string Event::getBeginDate()
{
    return beginDate;
}

void Event::setBeginDate(string beginDate)
{
    this->beginDate = beginDate;
}

string Event::getEndDate()
{
    return endDate;
}

void Event::setEndDate(string endDate)
{
    this->endDate = endDate;
}

string Event::getPreference()
{
    return preference;
}

void Event::setPreference(string preference)
{
    this->preference = preference;
}

int Event::getExpectedBudget()
{
    return expectedBudget;
}

void Event::setExpectedBudget(int expectedBudget)
{
    this->expectedBudget = expectedBudget;
}

string Event::getStatus()
{
    return status;
}

void Event::setStatus(string status)
{
    this->status = status;
}

string Event::getComment()
{
    return comment;
}

void Event::setComment(string comment)
{
    this->comment = comment;
}

string Event::getDescription()
{
    return description;
}

void Event::setDescription(string description)
{
    this->description = description;
}