#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {

    //pair<int, string> p1 = {22, "Suhani"};
    pair<int, string> p1;
    int n; string name;
    cin >> n >> name;
    p1 = make_pair(n, name);
    cout << p1.first << " " << p1.second;
    
    
    return 0;
}
