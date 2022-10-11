#include <iostream>
using namespace std;
int GetPower(int x, int n) {
	if (n == 0) return 1;
	else return x * GetPower(x, n - 1);
}
int GetCount(int num) {
	if (num == 0) return 0;
	else return 1 + GetCount(num / 10);
}
int TurnNum(int num) {
	if (num == 0)
		return 0;
	else
		return GetPower(10, GetCount(num / 10)) * (num % 10) + TurnNum(num / 10);
}
int main()
{
	setlocale(LC_ALL, "rus");
	int a = 12345, b;
	cout << a;
	b = TurnNum(a);
	cout << "Результат равен:" << b;
	return 0;
}