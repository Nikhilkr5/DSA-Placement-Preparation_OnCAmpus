//Declare the HashMap
    //and hash the given array
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]++];

    }

    //Find the single element and return the answer:
    for(auto it : mpp){
        if(it.second ==1)
            return it.first;
    }