#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    
    //Sets are a type of associative containers in which each element has to be unique,
    // because the value of the element identifies it. 
    //The value of the element cannot be modified once it is added to the set, 
    //though it is possible to remove and add the modified value of that element. 
    set<int> s; //elements stored in irdered sequence
    unordered_set<int> us; //elements not stored in same sequence

    //Set is implemented as a balanced tree structure that is why it is possible to maintain order between the elements (by specific tree traversal). The time complexity of set operations is O(log n) while for unordered_set, it is O(1). 

    //check if set is empty
    if (s.empty()) cout << "Empty set\n";
    else cout << "Set not empty\n";

    s.insert(99);
    s.insert(29);
    s.insert(69);
    s.insert(89);
    s.insert(19);

    cout << "Size: " << s.size() << "\n";
    // only one 50 will be added to the set
    s.insert(99);
    s.insert(19);
    cout << "Size: " << s.size() << "\n";

    


    for (auto it : s) {
        cout << it << " ";
    }

    // assigning the elements from s1 to s2
    set<int> s2(s.begin(), s.end());
    cout << "s2: ";
    for (auto it : s2) {
        cout << it << " ";
    }
    cout << endl;

    //removing elements
    s2.erase(s2.begin(), s2.find(29));
    cout << "s2: ";
    for (auto it : s2) {
        cout << it << " ";
    }
    cout << endl;

    //remove element
    s2.erase(69);
    cout << "s2: ";
    for (auto it : s2) {
        cout << it << " ";
    }

    //lower_bound, upper_bound applicable in set

    //begin() – Returns an iterator to the first element in the set.
    //end() – Returns an iterator to the theoretical element that follows last element in the set.

    //size() – Returns the number of elements in the set.
   // max_size() – Returns the maximum number of elements that the set can hold.
   // empty() – Returns whether the set is empty.
  //  insert(const g) – Adds a new element ‘g’ to the set.
    //iterator insert (iterator position, const g) – Adds a new element ‘g’ at the position pointed by iterator.
   // erase(iterator position) – Removes the element at the position pointed by the iterator.
    //erase(const g)– Removes the value ‘g’ from the set.
   // clear() – Removes all the elements from the set.

   //find(const g) – Returns an iterator to the element ‘g’ in the set if found, else returns the iterator to end.
   //find takes O(logn)
   //count(const g) – Returns 1 or 0 based on the element ‘g’ is present in the set or not.

    return 0;
}
