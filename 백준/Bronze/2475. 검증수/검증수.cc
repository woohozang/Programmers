#include<iostream>

using namespace std;

int main() {

	int num[5];
	int psum = 0;
	int pow = 0;

	for (int i = 0; i < 5; i++) {
		cin >> num[i];
	}

	for (int j = 0; j < 5; j++) {
		pow = num[j] * num[j];
		psum += pow;

	}
	cout << psum % 10 << endl;

}