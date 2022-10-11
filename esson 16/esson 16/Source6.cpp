#include <iostream>
#pragma warning(disable : 4996)
using namespace std;
int main() {
	char* str, * token;
	char seps[] = ",.?!:;";
	str = new char[100];
	cout << "enter string\n";
	cin.getline(str, 80);
	token = strtok(str, seps);
	token = strtok(NULL, seps);
	token = strtok(0, seps);
	int n = strlen(token);
	cout << "length " << n << endl;
	return 0;
}