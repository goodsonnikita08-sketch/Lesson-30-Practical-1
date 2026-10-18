#include "Notification.h"
#include <iostream>

Notification::Notification(std::string message, std::string timestamp)
    : message(message), timestamp(timestamp) {
}

EmailNotification::EmailNotification(std::string message, std::string timestamp, std::string emailAddress)
    : Notification(message, timestamp), emailAddress(emailAddress) {
}

void EmailNotification::send() const {
    std::cout << "Отправка email на " << emailAddress << ": " << message << '\n';
}

PushNotification::PushNotification(std::string message, std::string timestamp, std::string deviceId)
    : Notification(message, timestamp), deviceId(deviceId) {
}

void PushNotification::send() const {
    std::cout << "Отправка пуша на устройство " << deviceId << ": " << message << '\n';
}