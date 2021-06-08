#include<bits/stdc++.h>
using namespace std;

int main() {

    // The functions supported by queue are : 
    // empty() – Returns whether the queue is empty.
    // size() – Returns the size of the queue.
    // queue::swap() in C++ STL: Exchange the contents of two queues but the queues must be of same type, although sizes may differ.
    // queue::emplace() in C++ STL: Insert a new element into the queue container, the new element is added to the end of the queue.
    // queue::front() and queue::back() in C++ STL– front() function returns a reference to the first element of the queue. back() function returns a reference to the last element of the queue.
    // push(g) and pop() – push() function adds the element ‘g’ at the end of the queue. pop() function deletes the first element of the queue.

    queue<int> q;

    if (q.empty()) cout << "The Queue is empty.\n";
    else {
        cout << "The Queue Size is: " << q.size() << "\n";
    }

    q.push(99);
    q.push(89);
    q.push(79);
    q.push(69);
    q.push(59);
    q.push(49);

    cout << "The Queue Size is: " << q.size() << "\n";
    cout << "Front is: " << q.front() << "\n";



    return 0;
}