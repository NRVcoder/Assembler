#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
int main() {
    string S2;
    getline(cin, S2);
    stringstream ss(S2);
    vector <string> vstr;
    string temp;
    while (ss >> temp)
        vstr.push_back(temp);
    copy(vstr.begin(), vstr.end(), ostream_iterator<string>(cout, "\n"));
    return 0;
}