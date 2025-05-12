#include <iostream>

// using a directive, practically places/activates std:: so you can just type cout
// using namespace std; essentially unlocks all the std:: instances
// namespaces also help avoid name collisions, std::arm and dtd::arm would be different

using std::cout;

// Effectively, this activates ONLY cout with std::, like leaving the door unlocked for only one door versus all the doors.

int main() {
// Print a little welcome without printf

cout << "Hello COP3371!\n" << std::endl;

// cout means console output
// << is the stream insertion operator,, >> is the stream extraction operator
// :: is the scope resolution operator
// std is the standard namespace
// endl works like \n

cout << "5 / 2 is " << 5.0 / 2 << std::endl;
// only deals in decimals if you give them to it.
return 0;
}