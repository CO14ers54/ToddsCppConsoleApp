// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <string>
void PointersAndReferences();

int main()
{
    PointersAndReferences();
}

void PointersAndReferences()
{
    std::cout << "Hello World!\n";

    int int1 = 22;
    int* ptrInt1 = &int1;

    int int2 = 44;
    int* ptrInt2 = &int2;

    std::cout << "\n";
    std::cout << "int1 = ";
    std::cout << int1;
    std::cout << "\n";
    std::cout << "ptrInt1 = ";
    std::cout << ptrInt1;
    std::cout << "\n";
    std::cout << "int2 = ";
    std::cout << int2;
    std::cout << "\n";
    std::cout << "ptrInt2 = ";
    std::cout << ptrInt2;
    std::cout << "\n";

    string x;
    std::cin >> x;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
