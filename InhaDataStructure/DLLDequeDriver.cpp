#include <iostream>
#include <stdexcept>

#include "DLLDeque.h"

using namespace std;

int main() {
    DLLDeque dq;
    //STack
    
    dq.insertFront(7);
    dq.insertFront(13);
    dq.insertFront(9);
    cout << dq.front() << ", " << dq.size() << endl;
    dq.eraseFront();
    cout << dq.front() << ", " << dq.size() << endl;
    dq.eraseFront();
    cout << dq.front() << ", " << dq.size() << endl;
    dq.eraseFront();
    cout << boolalpha << dq.empty() << endl;

    
    dq.insertBack(5);
    dq.insertBack(3);
    cout << dq.front() << ", " << dq.back() << ", " << dq.size() << endl;
    dq.eraseFront();
    dq.insertBack(7);
    cout << dq.front() << ", " << dq.back() << ", " << dq.size() << endl;
    dq.eraseFront();
    cout << boolalpha << dq.empty() << endl;

    return EXIT_SUCCESS;
}