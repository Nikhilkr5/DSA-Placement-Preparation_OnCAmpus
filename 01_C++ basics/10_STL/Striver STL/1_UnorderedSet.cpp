#include<bits/stdc++.h>
using namespace std;

int main(){
    //Declare an unordered_set of integers
    unordered_set<int> s;

    //Insert elements from 1 to 10 into the unordered_set
    for(int i=1;i<=10;i++){
        s.insert(i); //insert() adds anew element to the set
    }

    //Display all elements presenet in the unordered_set
    cout<<"Elements present in the unordered set: ";
    for(auto it = s.begin(); it!= s.end();it++){
        cout<<* it<<" "; //Dereference iterator tto access the element
    }
    cout<<endl;

    int n=2;
    //Check if element 2 exists in the set using find()
    if(s.find(2) != s.end()) //find() returns an iterator to element if found, else s.end()
        cout<< n<< " is present in unordered set"<<endl;
    
    //Erase the first element from the set using iterator    
    s.erase(s.begin());    //erase() removes element at given iterator position

    //Display elements after deletion
    cout<<"Elements after deleting the first element:";
    for(auto it = s.begin(); it!= s.end(); it++){
        cout<< *it <<" ";
    }
    cout<<endl;

    //Display size of the unordered set
    cout<<"The size of the unordered set is: "<<s.size()<<endl;

    //Check if the unordered set is empty
    if(s.empty() == false) //empty() returns rue if set has no elements
        cout<<"The unordered set is not empty"<<endl;
    else
        cout<<"The unordered set is empty"<<endl;    

    //Clear all elements from the unordered set
    s.clear();

    //Display size after clearing
    cout<<"Size of the unordered set after clearing all the elements: "<<s.size();

    //============================= ADDITIONAL STL FUNCTIONS ======================================

    //Re- INSERT elements for further demonstrations
    for(int i=1;i<=5;i++){
        s.emplace(i);   //emplace() insert element directly into the set

        /*
        emplace():
            Constructs the element directly inside the container.
            Avoids an extra copy or move.
            Uses constructor arguments.
        */
    }

    //count() - returns 1 if element is present , otherwise 0
    cout<<"Counts of element 3: "<<s.count(3)<<endl;

    //cbegin() and cend()- constant iterators (read only access)
    cout<<"Elements using cbegin() and cend(): ";
    for(auto it = s.cbegin(); it!=s.cend();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    //bucket_size() - number of elements in a specific bucket
    size_t bucketNumber = s.bucket(3);  //find bucket containing element 3
    cout<<"Bucket size of bucket containng element 3: "<<s.bucket_size(bucketNumber)<<endl;


    //max_size() - maximum number of elements unordered_set can theoretically hold
    cout<<"Maximum size of unordered--set: "<<s.max_size()<<endl;

    //max_bucket_count() - maximum number of buckets unordered_set can have
    cout<<"Maximum bucket count: "<<s.max_bucket_count() <<endl;
    
    return 0;
}        
    
        
