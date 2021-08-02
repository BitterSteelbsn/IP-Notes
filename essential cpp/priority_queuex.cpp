#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> pi;
int main() {
    priority_queue<pair<int, int>> pq;//ordered by first element;
    pq.push(make_pair(10, 200));
    pq.push(make_pair(20, 100));
    pq.push(make_pair(15, 400));
  
    pair<int, int> top = pq.top();
    cout << top.first << " " << top.second; //20 100

    priority_queue<pi, vector<pi>, greater<pi> > pq;//ordered by first element min heap
    pq.push(make_pair(10, 200));
    pq.push(make_pair(20, 100));
    pq.push(make_pair(15, 400));
  
    pair<int, int> top = pq.top();
    cout << top.first << " " << top.second;

    return 0;
}