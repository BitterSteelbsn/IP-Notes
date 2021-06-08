#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[]) {

    vector<int> v;
    vector < int > v1;

    vector < int > v2 = v1;
    vector < int > v3(v1);

    for (int i = 0; i < 10; i++) {
        v.push_back(i + 1);
    }    


    //traversing
    vector<int>::iterator it;//iterator of vector

    for (it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    v.size();//return current size of array
    v.capacity();//return current capacity of array
    v.empty();//returns true if the vector is empty

    //referencing - v[i]
    v.front();//returns reference to first element
    v.back();//returns reference to last element

    // fill the array with 10 five times
    v.assign(5, 10);// v becomes {10,10,10,10,10} It inserts new elements before the element at the specified position
    v.push_back(11);// {10,10,10,10,10,11}
    v.pop_back();//{10,10,10,10,10}
    v.insert(v.begin(), 5);// inserts 5 at the beginning {5,10,10,10,10,10}
    v.erase(v.begin()); // removes the first element
    v.clear();//erases all elements
    
    


    return 0;
}
