//using map in string hashing
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    //precompute
    map<char,int> mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;

    }


    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;

        //fetch
        cout<<mp[c]<<endl;
    }
    return 0;
}


/*
Time complexity of map data structure:
The total time complexity will be O(N * time taken by map data structure).

Storing(i.e. insertion) and fetching(i.e. retrieval) in a C++ map, both take always O(logN) time complexity, where N = the size of the map. 

But the unordered_map in C++ and HashMap in Java, both take O(1) time complexity to perform storing(i.e. insertion) and fetching(i.e. retrieval). Now, it is valid for the best case and the average case. 

But in the worst case, this time complexity will be O(N) for unordered_map. Now, the worst case occurs very very rarely. It almost never happens and most of the time, we will be using unordered_map. 

Note: Our first priority will be always to use unordered_map and then map. If unordered_map gives a time limit exceeded error(TLE), we will then use the map.

The time complexity in the worst case is O(N) because of the internal collision.



*/












/*
Got it—you want the time complexity of this code. Let's break it down step by step:

Code Analysis

Input Reading:
code: 
for (int i = 0; i < n; i++) {
    cin >> arr[i];
}
*****Runs n times → O(n)

Precomputation using map<int,int>:
for (int i = 0; i < n; i++) {
    mp[arr[i]]++;
}
Each insertion or update in std::map (which is a Red-Black Tree) takes O(log k),
where k = number of unique elements so far.

Worst case: all elements unique → k = n
→ Total complexity = O(n log n)

Query processing:
while (q--) {
    cout << mp[number] << endl;
}
Lookup in std::map takes O(log n) per query.

For q queries → O(q log n)

Overall Time Complexity:
    O(n)+O(nlogn)+O(qlogn)=O(nlogn+qlogn)

Space Complexity

arr[n] → O(n)

map<int,int> storing up to n elements → O(n)
Total → O(n)




Optimization Tip:

If you use unordered_map<int,int> instead of map<int,int>:

    *Insert & lookup become O(1) on average → Total becomes O(n + q) on average.





*/