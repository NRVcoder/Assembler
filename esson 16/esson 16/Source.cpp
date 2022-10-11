//Вывести из массива только четные


#include<iostream>
#include<vector>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int number = 100;
	int vec_size = 101;
	int k = 0;
	vector<int> vec(vec_size);
	for (int j = 0; j <= number; ++j) {
		vec[j] = k;
		k++;
	}
	for (int n = 1; n <= number; ++n) {
		if (n % 2 == 0) {
			cout << vec[n] << " ";
		}
	}
	return 0;
}





