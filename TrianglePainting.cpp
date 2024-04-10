#include <iostream>
using namespace std;
int main() {
	char star = '*';
	int height;
	cin >> height;
	for (height; height != 0; --height) {
		cout << string(height, star) << endl;
	}
}