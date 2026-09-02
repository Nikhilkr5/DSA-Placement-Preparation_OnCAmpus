#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n;

    vector<int> a(n);
    for (int &x : a)
        cin >> x;

    cin >> m;

    vector<int> b(m);
    for (int &x : b)
        cin >> x;

    unordered_set<int> st;

    // Store unique elements of A
    for (int x : a)
        st.insert(x);

    // Check elements of B
    for (int x : b) {
        if (st.count(x)) {
            cout << x << " ";
            st.erase(x);   // prevent printing same common element again
        }
    }

    return 0;
}


// TC: O(n + m) average
// SC: O(n)

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n;

    vector<int> a(n);

    for (int &x : a)
        cin >> x;

    cin >> m;

    vector<int> b(m);

    for (int &x : b)
        cin >> x;

    unordered_set<int> st;

    for (int x : b)
        st.insert(x);

    unordered_set<int> printed;

    for (int x : a) {
        if (st.count(x) && !printed.count(x)) {
            cout << x << " ";
            printed.insert(x);
        }
    }

    return 0;
}
*/