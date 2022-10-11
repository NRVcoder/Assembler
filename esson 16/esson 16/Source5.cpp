#include <iostream>
#pragma warning(disable : 4996)
using namespace std;
char* Del(char* str) {
	char result[80];
	char seps[] = ".,:;!?";
	char* token;
	result[0] = '\0';
	token = strtok(str, seps);
	while (token != NULL) {
		if (strlen(token) % 2 == 0) {
			strcat(result, token);
			strcat(result, " ");
		}
		token = strtok(NULL, seps);
	}
	cout << result;
	return 0;
}
int main() {
	char s[80];
	cin.getline(s, 80);
	char* str = Del(s);
	return 0;
}