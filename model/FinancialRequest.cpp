#include <iostream>
#include <string.h>

using namespace std;

class FinancialRequest {
    public:
        int    getId();
        void setId(int id);

        string getRequestDepartment();
        void   setRequestDepartment(string requestDepartment);

        int    getEventId();
        void   setEventId(int id);

        int    getAmount();
        void   setAmount(int amount);

        string getReason();
        void   setReason(string reason);

        string getStatus();
        void   setStatus(string status);

        string getCommentFromFinancialManager();
        void   setCommentFromFinancialManager(string commentFromFinancialManager);

    private:
        int id;
        string requestDepartment;
        int eventId;
        int amount;
        string reason;
        string status;
        string commentFromFinancialManager;
};

int FinancialRequest::getId() {
    return id;
}

void FinancialRequest::setId(int id) {
    this->id = id;
}

string FinancialRequest::getRequestDepartment() {
    return requestDepartment;
}

void FinancialRequest::setRequestDepartment(string requestDepartment) {
    this->requestDepartment = requestDepartment;
}

int FinancialRequest::getEventId() {
    return eventId;
}

void FinancialRequest::setEventId(int eventId) {
    this->eventId = eventId;
}

int FinancialRequest::getAmount() {
    return amount;
}

void FinancialRequest::setAmount(int amount) {
    this->amount = amount;
}

string FinancialRequest::getReason() {
    return reason;
}

void FinancialRequest::setReason(string reason) {
    this->reason = reason;
}

string FinancialRequest::getStatus() {
    return status;
}

void FinancialRequest::setStatus(string status) {
    this->status = status;
}

string FinancialRequest::getCommentFromFinancialManager() {
    return commentFromFinancialManager;
}

void FinancialRequest::setCommentFromFinancialManager(string commentFromFinancialManager) {
    this->commentFromFinancialManager = commentFromFinancialManager;
}
