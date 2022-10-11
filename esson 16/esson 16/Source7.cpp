#include <iostream>
#include <vector>
#include <string>
using namespace std;
void SplitToVector(vector<string>& v, string dlm, string src) {
    string::size_type p, start = 0, len = src.length();
    v.clear();
    start = src.find_first_not_of(dlm);
    p = src.find_first_of(dlm, start);
    while (p != string::npos) {
        v.push_back(src.substr(start, p - start));
        start = src.find_first_not_of(dlm, p);
        p = src.find_first_of(dlm, start);
    }
    if (len > start)
        v.push_back(src.substr(start, len - start));
}
int main(void) {
    string input;
    getline(cin, input);
    vector<string> v;
    int i, size;
    SplitToVector(v, "-!,;.?:", input);
    size = v.size();
    for (i = 0; i < size; i++)
        cout << v.at(i) << endl;
    return 0;
}