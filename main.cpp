#include <iostream>
using namespace std;

void printName(int age);

int main()
{
    printName(22);
    return 0;
}

void printName(int age)
{
    cout << "Kyle Stuersel " << "(" << age << ")" << endl;
}
