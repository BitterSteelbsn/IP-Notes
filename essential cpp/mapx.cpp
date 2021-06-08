#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    

    map<int, int> m;
    unordered_map <int, int> um;

    m.insert(pair<int, int>(1, 40));
    m.insert(pair<int, int>(2, 30));
    m.insert(pair<int, int>(3, 60));
    m.insert(pair<int, int>(4, 20));
    m.insert(pair<int, int>(5, 50));
    m.insert(pair<int, int>(6, 50));
    m.insert(pair<int, int>(7, 10));

    cout << "m: \n";
    for (auto it : m) {
        cout << it.first << " " << it.second << " \n";
    }
    cout << endl;

    //erase one
    //remove all elements with key = 4
    m.erase(4);
    cout << "m: \n";
    for (auto it : m) {
        cout << it.first << " " << it.second << " \n";
    }
    cout << endl;

    m.erase(m.begin(), m.find(6));
    cout << "m: \n";
    for (auto it : m) {
        cout << it.first << " " << it.second << " \n";
    }
    cout << endl;




    // Some basic functions associated with Map:
    // begin() – Returns an iterator to the first element in the map
    // end() – Returns an iterator to the theoretical element that follows last element in the map
    // size() – Returns the number of elements in the map
    // max_size() – Returns the maximum number of elements that the map can hold
    // empty() – Returns whether the map is empty
    // pair insert(keyvalue, mapvalue) – Adds a new element to the map
    // erase(iterator position) – Removes the element at the position pointed by the iterator
    // erase(const g)– Removes the key value ‘g’ from the map
    // clear() – Removes all the elements from the map


    // map::operator[] in C++ STL– This operator is used to reference the element present at position given inside the operator.
    // map::clear() in C++ STL– Removes all the elements from the map.
    // map::at() and map::swap() in C++ STL– at() function is used to return the reference to the element associated with the key k. swap() function is used to exchange the contents of two maps but the maps must be of same type, although sizes may differ.

    //map count() function in C++ STL– Returns the number of matches to element with key value ‘g’ in the map.

    //upper_bound lower_bound applicable;

    return 0;
}
