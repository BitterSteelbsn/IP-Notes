#include<iostream>
#include<stack>
using namespace std;

int main() {

    // The functions associated with stack are: 
    // empty() – Returns whether the stack is empty – Time Complexity : O(1) 
    // size() – Returns the size of the stack – Time Complexity : O(1) 
    // top() – Returns a reference to the top most element of the stack – Time Complexity : O(1) 
    // push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1) 
    // pop() – Deletes the top most element of the stack – Time Complexity : O(1) 


    stack <int> s;

    if (s.empty()) cout << "Stack is empty\n";
    else {
        cout << "Top of the stack: " << s.top() << endl;
    }

    s.push(99);
    s.push(89);
    s.push(79);
    s.push(69);
    s.push(59);

    cout << "Size: " << s.size() << endl;
    s.pop();
    cout << "Size: " << s.size() << endl;


    return 0;
}