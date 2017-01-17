#include <iostream>
#include <string>

using namespace std;

int main() {
	string name;

	cout << "Welcome to CVLab!" << endl;
	cout << "This is team leader speaking." << endl;
	cout << "What's your name?" << endl;
	cin >> name;
	cout << "Glad to know you, " << name << endl;
	cout << "Have a nice day!" << endl;

	system("pause");
	return 0;
}