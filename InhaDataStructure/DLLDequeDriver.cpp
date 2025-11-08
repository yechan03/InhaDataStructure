#include <iostream>
#include <stdexcept>

#include "DLLDeque.h"

using namespace std;

int main() {
    DLLDeque dq(3);

    dq.insertFront(20);
    cout << dq.front() << endl;
    dq.insertFront(30);
    dq.insertBack(40);
    cout << dq.front() << endl;
    cout << dq.back() << endl;
}