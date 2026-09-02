sizeof(arr)/sizeof(arr[0]) → only works inside the same scope where array is declared.

If you pass the array to a function → you must also pass n.

If you don’t want to bother with size tracking → use vector.