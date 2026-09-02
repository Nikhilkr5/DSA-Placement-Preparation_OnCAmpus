#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> first;
    vector<int> second;

    first.push_back(10);
    first.push_back(11);
    first.push_back(12);
    first.push_back(13);



    second.push_back(100);
    second.push_back(200);
    second.push_back(300);
    second.push_back(400);

    first.swap(second);

    cout<<first[0]<<" "<<first[1]<<" "<<first[2]<<" "<<first[3]<<" "<<endl;

    //for each loop
    for(int i:first){
        cout<<i<<" ";
    }

    for(int i : second){
        cout<<i <<" ";
    }


    //creation
    //vector<int> marks(5, -1);

    //cout<< *(marks.begin()) <<endl;      //dereference the iterator


    // vector<int> marks;
    //cout<<"Max_size: "<<marks.max_size()<<endl;

    //cout<<marks.capacity()<<endl;

    // marks.reserve(10);
    // cout<<marks.capacity()<<endl;



    // marks.push_back(10);
    // marks.push_back(20);
    // marks.push_back(30);
    // marks.push_back(40);


    //marks.clear();

    // marks.insert(marks.begin(), 50);

    // cout<<marks.size()<<endl;

    // marks.erase(marks.begin(), marks.end());
    // cout<<marks.size()<<endl;

    // cout<<marks[0]<<endl;

    // cout<<"Size: "<<marks.size()<<endl;

    // //40 will be removed
    // marks.pop_back();
    // cout<<"Size: "<<marks.size()<<endl;
    // cout<<marks.front()<<endl;
    // cout<<marks.back()<<endl;

    // if(marks.empty() == true){
    //     cout<<"vector is empty"<<endl;
    // }
    // else {
    //     cout<<"vector is not empty"<<endl;
    // }

    

    // cout<<marks[0]<<endl;
    // marks[0] = 100;
    // cout<<marks[0]<<endl;

    // cout<<marks[0]<<endl;
    // cout<<marks.at(0)<<endl;

    // cout<<marks.capacity()<<endl;
    // cout<<marks.size()<<endl;
    // marks.push_back(30);
    // cout<<marks.capacity()<<endl;
    // cout<<marks.size()<<endl;



    // vector<int> age;
    // age[0] = 10;   //error


    // vector<int> age(100);
    // age[0] = 10;
    

}
