#include<bits/stdc++.h>
using namespace std;

bool ispar(string x) {
	stack<char> st;
	int i = 0;
    //cout << "bp-4"<<endl;
	while (x[i] != '\0') {

		if (x[i] == '(' || x[i] == '[' || x[i] == '{') {
			st.push(x[i]);
		} else if (x[i] == ')' || x[i] == ']' || x[i] == '}') {
			char topBr = st.top();
            st.pop();
			if (x[i] == ')' && topBr != '(') {
                return false;
            } else if (x[i] == ']' && topBr != '[') {
                return false;
            } else if (x[i] == '}' && topBr != '{') {
                return false;
            }
		}
		i++;//cout << "bp-3"<<endl;
	}
	//cout << "bp-2"<<endl;
    if (st.empty()) {
        //cout << "bp-1.5"<<endl;
		return true;
	}
    //cout << "bp-1"<<endl;
	return false;
}
int main(int argc, char const *argv[]) {
	stack<int> st;
	cout << st.top();
	
	return 0;
}