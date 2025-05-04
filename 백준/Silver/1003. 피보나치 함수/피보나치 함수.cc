#include<iostream>
using namespace std;

int main() {
    int a;
    int arr[41] = { 0,1,1 };
    for (int i = 3; i <= 40; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    cin >> a;
    for (int j = 0; j < a; j++) {
        int b;
        cin >> b;
        if (b == 0) {
            cout << 1 << ' ' << 0 << endl;
        }
        else if (b == 1) {
            cout << 0 << ' ' << 1 << endl;
        }
        else {
            cout << arr[b - 1] << ' ' << arr[b] << endl;
        }

    }


}