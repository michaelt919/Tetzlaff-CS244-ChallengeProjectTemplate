#include <iostream>
#include "../ChallengeProject/MyClass.h" // TODO: Add relative paths to headers in the main project
using namespace std;

int main()
{
    // Write your command-line interface (CLI) here, if applicable:
    cout << "Welcome to Challenge Project I!" << endl;
    // etc.

    MyClass my {};
    cout << "MyClass value: " << my.getValue() << endl;

    return 0;
}
