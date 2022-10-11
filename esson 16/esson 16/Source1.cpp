//Найти суммы тех столбцов матрицы, у которых первый элемент больше, чем последний


#include<iostream>
#include<vector>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	cin >> n >> m;
	vector<vector<int>>matrica(n, vector<int>(m));
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> matrica[i][j];
		}
	}
	for (int i = 0; i < m; ++i) {
		if (matrica[0][i] >= matrica[n - 1][i]) {
			int sum = 0;
			for (int j = 0; j < n; ++j) {
				sum += matrica[j][i];
			}
			cout << sum << endl;
		 }
		else {
			cout << " Нет решений ";
			break;
		}
	}
	return 0;
}



