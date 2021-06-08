#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {

    //basic array
    int a[5];
    char c[5];

    for (int i = 0; i < 5; i++) {
        a[i] = i;
        c[i] = (char) (97 + i);
    }

    // for (int i = 0; i < 5; i++) {
    //     cout << a[i] << " " << c[i] << "\n";
    // }

    //new and delete operator

    int* d = new int[5];
    int*e = d + 1;

    for (int i = 0; i < 5; i++) {
       d[i] = i + 11;
    }
    
    for (int i = 0; i < 5; i++) {
        cout << d[i] << " " << e[i] << "\n";
    }

    cout << "-----" << endl;
     
    delete d;
    for (int i = 0; i < 5; i++) {
        cout << d[i] << " " << e[i] << "\n";
    }



    return 0;
}
