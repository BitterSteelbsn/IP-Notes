#include<iostream>
using namespace std;

void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

void print(char arr[]) {
    int i = 0;
    while (arr[i] != '\0') {
        cout << arr[i];
        i++;
    } 
    cout << endl;
}

void printPermutations(char arr[], int l, int r) {
    if (l == r) {
        print(arr);
    } else {
        for (int i = l; i <= r; i++) {
            swap(arr[l], arr[i]);
            printPermutations(arr, l + 1, r);
            swap(arr[l], arr[i]);
        }
    }
}


int main() {
    char arr[] = {'H', 'E', 'L', 'L', 'O', '\0'};
    print(arr);
    printPermutations(arr, 0, 4);
    return 0;
}