/*
1. Recursion Basics

Recursion is a function calling itself to solve smaller subproblems.

Base condition is crucial to stop infinite recursion.

Example: Print 1 → n

void func(int i, int n) {
    if(i > n) return;
    cout << i << " ";
    func(i+1, n);
}

2. Backtracking

Backtracking = recursion + undoing choices to explore all possibilities.

Base condition: stop when a complete solution is reached or no more moves.

Example: Generate all subsets of a set.

void subsets(vector<int>& nums, int i, vector<int>& current) {
    if(i == nums.size()) {
        // Print current subset
        return;
    }
    current.push_back(nums[i]);          // choose
    subsets(nums, i+1, current);         // explore
    current.pop_back();                  // undo (backtrack)
    subsets(nums, i+1, current);         // skip
}

3. Printing 1 → n in Recursion vs Backtracking

Recursion (forward print):

Start from 1, print before recursive call.

Backtracking style:

Start from n, go down recursively, print while returning.

Both give same output but flow is opposite.

4. Sum of First n Natural Numbers

Normal Recursion:

int sum(int n) {
    if(n == 0) return 0;
    return n + sum(n-1);  // add while returning
}


Tail Recursion:

void sumTail(int i, int n, int sum = 0) {
    if(i > n) {
        cout << sum << endl;
        return;
    }
    sumTail(i+1, n, sum+i);  // last action
}


Tail recursion advantage: recursive call is last → can be optimized.

5. Tail Recursion Optimization (TRO)

Tail recursion: you write a function where recursion is the last operation.

TRO: compiler can reuse stack frames to reduce space from O(n) → O(1).

Key point: TRO is done by compiler, not by you manually.

6. Time & Space Complexity
Method	Time Complexity	Space Complexity
Normal recursion	O(n)	O(n) stack
Tail recursion	O(n)	O(n) stack
Tail recursion + TRO	O(n)	O(1) (if compiler supports)
✅ Key Takeaways

Base condition is crucial in recursion/backtracking.

Tail recursion is more memory-efficient.

Backtracking = recursion + undo choices.

Printing 1 → n can be done either way depending on when you print.

Tail recursion optimization reduces stack memory, done by compiler.
*/




/*
Let’s clearly compare parameterized way vs functional way for printing the sum of first n natural numbers. I’ll explain with code, working, and differences.

1️⃣ Parameterized Way (Using Accumulator)

Here we pass the sum as a parameter and modify it along recursion.

This is typical tail recursion style.

#include <bits/stdc++.h>
using namespace std;

void sumParam(int i, int n, int sum = 0) {
    if(i > n) {
        cout << sum << endl;
        return;
    }
    sumParam(i + 1, n, sum + i);  // pass updated sum
}

int main() {
    int n = 5;
    sumParam(1, n);  // start from 1
    return 0;
}


How it works (n=5):

sumParam(1,5,0) → sumParam(2,5,1)
sumParam(2,5,1) → sumParam(3,5,3)
sumParam(3,5,3) → sumParam(4,5,6)
sumParam(4,5,6) → sumParam(5,5,10)
sumParam(5,5,10) → sumParam(6,5,15) → base → print 15


✅ Output: 15
n<0
Tail recursion: recursive call is last operation.

Sum is carried as parameter.

2️⃣ Functional Way (Return Value Approach)

Here we don’t pass an accumulator, instead each function returns a value.

This is non-tail recursion style.

#include <bits/stdc++.h>
using namespace std;

int sumFunc(int n) {
    if(n == 0) return 0;       // base condition
    return n + sumFunc(n - 1); // add after returning
}

int main() {
    int n = 5;
    cout << sumFunc(n) << endl;  // Output: 15
    return 0;
}


How it works (n=5):

sumFunc(5) = 5 + sumFunc(4)
sumFunc(4) = 4 + sumFunc(3)
sumFunc(3) = 3 + sumFunc(2)
sumFunc(2) = 2 + sumFunc(1)
sumFunc(1) = 1 + sumFunc(0)
sumFunc(0) = 0 → return
Then values added on return: 1+2+3+4+5=15


✅ Output: 15

Not tail recursion: addition happens after returning.

Uses stack for return values → O(n) space.

3️⃣ Comparison Table
Feature	Parameterized Way	Functional Way
State	Passed as parameter	Returned from function
Tail Recursion	Yes	No
Stack Usage	Can be optimized to O(1)	O(n)
When to Add	Before recursion	After recursion
Example	sumParam(i,n,sum)	sumFunc(n)

✅ Key Takeaways

Parameterized: efficient, tail recursion, sum carried as argument.

Functional: simpler, returns value, stack stores intermediate sums.

Both give same result, difference is flow and space usage.



*/