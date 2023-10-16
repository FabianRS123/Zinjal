#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int pisos = 6;
	for (int i = 1; i <= pisos; i++) {
		for (int k = 1; k < i ;k++) {
			cout << k << " ";
			cout<<endl;
		for (int j = 1; j < i; j++) {
			cout << i-j << " ";
		}
		}
		cout << endl;
	}
	return 0;
}

