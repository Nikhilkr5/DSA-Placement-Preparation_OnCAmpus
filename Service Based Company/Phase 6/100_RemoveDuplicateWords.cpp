#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;

    unordered_set<string> seen;
    vector<string> result;

    while (ss >> word) {
        if (seen.count(word) == 0) {
            result.push_back(word);
            seen.insert(word);
        }
    }

    for (string word : result)
        cout<<word<<" ";

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s;
//     getline(cin, s);

//     stringstream ss(s);
//     string word;

//     unordered_set<string> seen;
//     vector<string> result;

//     while (ss >> word) {
//         if (seen.insert(word).second)
//             result.push_back(word);
//     }

//     for (string word : result)
//         cout << word << " ";

//     return 0;
// }




/*
unordered_set::insert() returns a pair:
.first  → iterator
.second → true if insertion is successful, false if already present.

seen.insert(word).second
→ true  = word is new
→ false = word is duplicate
*/

/*
// insert() returns pair:
// .second = true if word is new, false if already present
if (seen.insert(word).second)
    result.push_back(word);
*/