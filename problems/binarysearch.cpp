#include<bits/stdc++.h>
using namespace std;

bool binarysearch(int a[], int low, int high, int num) {
    if (low < high) {
        int mid = (low + high) / 2;
        if (a[mid] == num) return true;
        else {
            if (a[mid] > num) return binarysearch(a, low, mid - 1, num);
            else return binarysearch(a, mid + 1, high, num);
        }
    }
    return false;
}


int main(int argc, char const *argv[]) {
    
    int a[] = {8,3,0,8,6,4,7,3,5,7};
    sort(a, a + 10);

    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << binarysearch(a, 0, 9, 8) << endl;

    return 0;
}

