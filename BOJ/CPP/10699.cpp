#include<iostream>
#include<ctime>

int main (void)
{
    time_t temp;
    struct tm* timeinfo;

    time(&temp);
    timeinfo = localtime(&temp);

    std::cout << 1900 + timeinfo->tm_year;
    std::cout << "-";
    if (timeinfo->tm_mon + 1 - 9 < 10)
        std::cout << "0" << timeinfo->tm_mon + 1;
    else 
        std::cout << timeinfo->tm_mon + 1;
    std::cout << "-";
    if (timeinfo->tm_hour < 9)
        timeinfo->tm_mday -= 1;
    if (timeinfo->tm_mday < 10)
        std::cout << "0" << timeinfo->tm_mday;
    else 
        std::cout << timeinfo->tm_mday;
    return 0;
}