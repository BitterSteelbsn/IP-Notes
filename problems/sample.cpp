#include<bits/stdc++.h>
using namespace std;
vector<int> topKFrequent(vector<int>& nums, int k) {
    map<int, int> m;
    for (int i = 0; i < nums.size(); i++) {
        m[nums[k]]++;
    }
    
    cout << "Map: "<<endl;
    priority_queue<pair<int, int>> pq;
    for (auto it : m) {
    	cout << it.first << " " << it.second << endl;
        pq.push({it.second, it.first});
    }
    cout << endl;
    
     vector<int> ans;
     cout << "pq: "<<endl;
     while (!pq.empty()) {
     	cout << pq.top().first << " " << pq.top().second << endl;
     	
     	pq.pop();
     }
     cout << endl;
    // for (int i = 0; i < k; i++) {
    //     ans.push_back(pq.top().second);          
    //     pq.pop();
    // }
    return ans;        
}
int main(int argc, char const *argv[]) {
	pair<int, pair<pair<int, int>, pair<int, int>>> x;

	x.second.f


	
	return 0;
}