#pragma once
#include <string>

class Notification {
protected:
    std::string message;
    std::string timestamp;

public:
    Notification(std::string message, std::string timestamp);
};

class EmailNotification : public Notification {
private:
    std::string emailAddress;

public:
    EmailNotification(std::string message, std::string timestamp, std::string emailAddress);
    void send() const;
};

class PushNotification : public Notification {
private:
    std::string deviceId;

public:
    PushNotification(std::string message, std::string timestamp, std::string deviceId);
    void send() const;
};