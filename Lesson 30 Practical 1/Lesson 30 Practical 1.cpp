#include <iostream>
#include <Windows.h>
#include "Notification.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    EmailNotification email("Спасибо за регистрацию!", "15:30", "test@gmail.com");
    email.send();

    std::cout << '\n';

    PushNotification push("У вас новое сообщение в чате", "15:35", "iPhone_12_Pro");
    push.send();

    return 0;
}