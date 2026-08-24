#include <iostream>
#include <windows.h>

#include "greeting.h"

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    std::cout << "Hello,C++! Let's get started!\n";

    Greeting firstGreeting;
    firstGreeting.SayHello();

    std::cin.get();

    return 0;
}
