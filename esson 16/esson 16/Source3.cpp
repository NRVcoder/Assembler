#include <iostream>
#include <string>
using namespace std;
string Poisk_zv(string s1) {
	string s2;
	int n1, n2;
	n1 = s1.find_first_of("*");
	n2 = s1.find_last_of("*");
	s2 = s1.substr(n1 + 1, n2 - n1 - 1);
	return s2;
}
int main() {
	string a;
	getline(cin, a);
	string b = Poisk_zv(a);
	cout << b;
	return 0;
}