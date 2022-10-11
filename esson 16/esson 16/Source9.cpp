#include<iostream>
using namespace std;
void pr(char* b) {
    if (*b) {
        pr(b + 1);
        cout << *b;
    }
}
int main() {
    char str[10001];
    cin.getline(str, 10000);
    pr(str);
    cout << endl;
    return 0;
}