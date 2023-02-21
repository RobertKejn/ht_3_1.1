
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <string>
#include <sstream>
#include <Windows.h>


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::cout << "Входные данные:  ";
    std::string str;
    std::getline(std::cin, str);
    std::stringstream sstr(str);
    std::vector<int> vec;
    int number = 0;
    while (sstr>>number)
    {
        vec.push_back(number);
    }
    std::for_each(vec.begin(), vec.end(), [](int& n) {
        if (n % 2 == 1)
            n = n * 3;
        });
    std::cout << "Выходные данные:  ";
    std::for_each(vec.begin(), vec.end(), [](int& n) {std::cout << n << " "; });
}
