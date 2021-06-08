#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int data[10] = { 
                        1,
                        3,
                        5,
                        7,
                        9,
                        11,
                        13,
                        15,
                        17,
                        19
                    };
    reverse(data + 2, data + 6);// the range { 5, 7, 9, 11 } is now { 11, 9, 7, 5 };


    //find() - returns iterator to first occurence or just past end
    vector<int> v;
    if (find(v.begin(), v.end(), 49) != v.end()) {
        //code
    }

    int data[5] = {
                    1,
                    5,
                    2,
                    4,
                    3
                };
    vector < int > X(data, data + 5);
    int v1 = * max_element(X.begin(), X.end()); // Returns value of max element in vector
    // int i1 = min_element(X.begin(), X.end())– X.begin(); // Returns index of min element in vector
    int v2 = * max_element(data, data + 5); // Returns value of max element in array
   // int i3 = min_element(data, data + 5)– data; // Returns index of min element in array

    //min(a,b), max(a,b), swap(a,b) - Here min(a,b) and max(a,b) returns the minimum and maximum of two elements, while swap(a,b) swaps two elements.
    //count(begin, end, element) returns the number of occurrences of an element in a container or a part of a container.
    //find() and count() are O(N)
    return 0;
}
