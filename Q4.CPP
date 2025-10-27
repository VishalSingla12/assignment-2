//Name:Vishal SIngla
//Roll no.:1024240009
#include <bits/stdc++.h>
using namespace std;

/* Q4(a): Concatenate */
string concatStr(string a, string b) {
    return a + b;
}

/* Q4(b): Reverse String */
string reverseStr(string s) {
    reverse(s.begin(), s.end());
    return s;
}

/* Q4(c): Delete Vowels */
string removeVowels(string s) {
    string res = "";
    for (char c : s) {
        if (string("aeiouAEIOU").find(c) == string::npos) res += c;
    }
    return res;
}

/* Q4(d): Sort Strings */
void sortStrings(vector<string>& arr) {
    sort(arr.begin(), arr.end());
}

/* Q4(e): Uppercase to Lowercase */
char toLower(char c) {
    if (c >= 'A' && c <= 'Z') return c + 32;
    return c;
}

int main() {
    cout << "Q4(a) Concat: " << concatStr("Hello","World") << endl;
    cout << "Q4(b) Reverse: " << reverseStr("Hello") << endl;
    cout << "Q4(c) Remove Vowels: " << removeVowels("Beautiful") << endl;

    vector<string> strArr = {"pear","apple","orange"};
    sortStrings(strArr);
    cout << "Q4(d) Sorted Strings: "; 
    for (auto &s: strArr) cout << s << " "; 
    cout << endl;

    cout << "Q4(e) Upper->Lower: " << toLower('A') << endl;
    return 0;
}
