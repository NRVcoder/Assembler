#include <iostream>
#pragma warning(disable : 4996)
using namespace std;
char* Poisk_zv(char* s1) {
	char* s2, * p1, * p2;
	int d;
	s2 = new char[81];
	cout << "Enter string" << endl;
	cin.getline(s1, 80);
	p1 = strchr(s1, '*');
	p2 = strrchr(s1, '*');
	d = p2 - s1;
	s1[d] = '\0';
	strcpy(s2, p1 + 1);
	return s2;
}
int main() {
	char a[80];
	char* b = Poisk_zv(a);
	cout << b;
	return 0;
}