#include<bits/stdc++.h>
using namespace std;

//naive approach
bool isprime1(int n) {
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    
    return true;
}

//O(n^0.5)
bool isprime2(int n) {
    for (int i = 2; i * i < n; i++)
        if (n % i == 0)
            return false;
    
    return true;
}

//Sieve of Eratosthenes: You can use the Sieve of Eratosthenes to find all the prime numbers that are less than or equal to a given number N or to find out whether a number is a prime number.
// The basic idea behind the Sieve of Eratosthenes is that at each iteration one 
// prime number is picked up and all its multiples are eliminated. 
// After the elimination process is complete, all the unmarked numbers that remain are prime.

//O(NloglogN)
void sieve(int n) {
    int arr[n + 1];
    for (int i = 0; i <= n; i++)
        arr[i] = 1;

    arr[0] = 0;
    arr[1] = 0;

    for (int i = 2; i <= n; i++) {
        if (arr[i] == 1) {
            for (int j = i * i; j <= n; j += i) {
                arr[j] = 0;
            }
        }
    }

    for (int i = 0; i <= n; i++) {
        if (arr[i] == 1) {
            cout << i << " ";
        }
    }
}

//prime factorixation O(n^0.5)
vector<int> getFactors(int n) {
	vector<int> ans;
	for (int i = 2; i * i <= n; i++) {
		while (n % i == 0) {
			ans.push_back(i);
			n = n / i;
		}
	}
	
	if (n != 1) {
		ans.push_back(n);
	}
	
	return ans;	
}

//sieve factorixation: smallest prime divisor 
vector<pair<int, int>> sieveFactorization(int n) {
    vector<pair<int, int>> v;
    for (int i = 1; i <= n; i++) {
        v.push_back({i, -1});
    }

    for (int i = 0; i < n; i++) {
        cout << v[i].first << " " << v[i].second << endl;
    }

    for (int i = 1; i < n; i++) {
        if (v[i].second == -1) {
            for (int j = i; j < n; j+= v[i].first) {
                v[j].second = i + 1;
            }
        }
    }
    cout << endl << endl;

    for (int i = 0; i < n; i++) {
        cout << v[i].first << " " << v[i].second << endl;
    }


    return v;

}

int main() {
    sieveFactorization(15);
    return 0;
}