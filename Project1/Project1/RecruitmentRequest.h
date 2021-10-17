#pragma once
#include <iostream>
#include <string.h>

#ifndef RecruimentRequest_h
#define RecruimentRequest_h
#endif RecruimentRequest_h

using namespace std;

class RecruitmentRequest
{
public:
    int getId();
    void setId(int id);

    string getRequestDepartment();
    void setRequestDepartment(string requestDepartment);

    string getContractType();
    void setContractType(string requestDepartment);

    int getYearOfExpericent();
    void setYearOfExperience(int yearOfExperience);

    string getJobTitle();
    void setJobTitle(string jobTitle);

    string getDecription();
    void setDescription(string description);

    string getStatus();
    void setStatus(string status);

    string getCommentFromHR();
    void setCommentFromHR(string commentFromHR);

private:
    int id;
    string requestDepartment;
    string contractType;
    int yearOfExperience;
    string jobTitle;
    string description;
    string status;
    string commentFromHR;
};

int RecruitmentRequest::getId()
{
    return id;
}

void RecruitmentRequest::setId(int id)
{
    this->id = id;
}

string RecruitmentRequest::getRequestDepartment()
{
    return requestDepartment;
}

void RecruitmentRequest::setRequestDepartment(string requestDepartment)
{
    this->requestDepartment = requestDepartment;
}

string RecruitmentRequest::getContractType()
{
    return contractType;
}

void RecruitmentRequest::setContractType(string contractType)
{
    this->contractType = contractType;
}

int RecruitmentRequest::getYearOfExpericent()
{
    return yearOfExperience;
}

void RecruitmentRequest::setYearOfExperience(int yearOfExperience)
{
    this->yearOfExperience = yearOfExperience;
}

string RecruitmentRequest::getJobTitle()
{
    return jobTitle;
}

void RecruitmentRequest::setJobTitle(string jobTitle)
{
    this->jobTitle = jobTitle;
}

string RecruitmentRequest::getDecription()
{
    return description;
}

void RecruitmentRequest::setDescription(string description)
{
    this->description = description;
}

string RecruitmentRequest::getStatus()
{
    return status;
}

void RecruitmentRequest::setStatus(string status)
{
    this->status = status;
}

string RecruitmentRequest::getCommentFromHR()
{
    return commentFromHR;
}

void RecruitmentRequest::setCommentFromHR(string commentFromHR)
{
    this->commentFromHR = commentFromHR;
}