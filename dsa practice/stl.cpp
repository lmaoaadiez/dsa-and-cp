#include<bits/stdc++.h>

using namespace std;
int main(){
    // pairs
    pair<int,int>p={1,3};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,pair<int,int>>p1={3,{4,5}};
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;
    pair<int,int>arr[]={{1,2},{2,4},{4,8}};
    cout<<arr[1].first<<endl;


    // vectors
    vector<int>v;
    v.push_back(1);
    v.emplace_back(19);
    vector<pair<int,int>>vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);//doesnt require additional curly braces during emplace
    vector<int>v1(5,100);
    // means 5 elements of 100 are pushed into v1
    vector<int>v2(5);//vector of 5 elements containing 0 or grabage values 
    vector<int>v3(v1);//v2 is copy of v1
    // in case of v1 even if you predefine the size to be 5 still you can increase its size by pushing more elements 

    //accessing elements in vector
    v.emplace_back(4);
    v.emplace_back(8);
    v.emplace_back(16);
    cout<<v[1]<<endl;//19
    vector<int>::iterator it = v.begin();
    it++;
    cout<<*(it)<<endl;
    it+=2;
    cout<<*it<<endl;
    vector<int>::iterator it1 = v.end();
    cout<<*(--it1)<<endl;//16 
    cout<<v.back()<<endl;
    for(vector<int>::iterator it2 = v.begin();it2<v.end();it2++){
        cout<<*(it2)<<endl;
    }
    for(auto it3 =v.begin();it3 !=v.end();it3++){
        cout<<*(it3)<<endl;
    }
    for(auto it : v){
        cout<<it<<endl;
    }
    //erasing functions
    v.erase(v.begin()+1);
    cout<<v[1]<<endl;
    v.erase(v.begin()+1,v.end()-1);
    cout<<v[1]<<endl;

    //inserting functions

    v1.insert(v1.begin(),300);
    cout<<v1[0]<<endl;
    v1.insert(v1.begin()+1,2,18);
    cout<<v1[1]<<" "<<v1[2]<<endl;
    vector<int> copy(2,50);
    v1.insert(v1.begin()+1,copy.begin(),copy.end());//insert one vector into another vector
    for(auto it : v){
        cout<<it<<endl;
    }
    for(auto it : v1){
        cout<<it<<endl;
    }
    cout<<v1.size()<<endl;
    v1.pop_back();// delets last element
    cout<<v1[0]<<endl;
    //v.clear() empties the whole vector
    cout<<v.empty();// checks whether the vector is empty or not

    //lists

    list<int> ls;
    ls.push_back(2);//2
    ls.emplace_back(5);//2,5
    ls.push_front(18);//18,2,5
    ls.emplace_front(91);//91,18,2,5
    for(auto it : ls){
        cout<<it<<endl;
    }
    //rest all functions are similar to vector

    //Stacks 
    //basically a lifo stack
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(8);
    st.emplace(8);// stack is 8,8,3,2,1
    cout<<st.top()<<endl;
    //indexing not provided in stack
    st.pop();//8,3,2,1
    st.pop();//3,2,1
    cout<<st.top()<<" "<<st.size()<<" "<<st.empty()<<endl;
    //st1.swap(st2) for swapping the stacks;
    stack<int>st1,st2;
    st1.push(1);
    st1.push(9);
    st2.push(3);
    st1.swap(st2);
    cout<<st1.top()<<" "<<st2.top()<<endl;
    //complexity in stack is in constant time

    //queues
    //fifo set

    queue<int> q;
    q.push(1);
    q.push(3);
    q.push(6);
    q.emplace(10);//1,3,6,10
    cout<<q.back()+4<<endl;//14
    cout<<q.front()-1<<endl;//0
    q.pop();
    cout<<q.front()-1<<endl;//2
    // size swap are same as that of stack

    //priority queue
    //largest element stays on top
    priority_queue<int>pq;
    pq.push(1);//1
    pq.push(8);//8,1
    pq.push(4);//8,4,1
    pq.emplace(10);//10,8,4,1
    cout<<pq.top()<<endl;//10
    pq.pop();
    cout<<pq.top()<<endl;//8
    //size swap and empty functions are same as that of queue
    // a tree is maintained for storage 
    
    //priority queue for storing the minimum element at the top
    //syntax
    priority_queue<int,vector<int>,greater<int>>pq1;
    pq1.push(5);//5
    pq1.push(2);//2,5
    pq1.push(8);//2,5,8
    pq1.push(1);//1,2,5,8
    cout<<pq1.top();//1
    // this is known as min heap
    // time complexities
    //push and pop logn
    //top constant time 


    //set
    //important points elements are in sorted order and are unique
    set<int>s;
    s.insert(1);//1
    s.insert(2);//1,2
    s.insert(2);//1,2
    s.insert(4);//1,2,4
    s.insert(3);//1,2,3,4
    // a tree is maintained in the system so not a linear ds
    auto it89 = s.find(3);
    //auto it = s.find(6) for an element that doesnt exist in the set iterator the to the locations just after the last element 
    s.erase(3);//erases 5 and takes logarithmic time or the other command that is s.erase(it) where it is pointer to 3 in the set
    int cnt = s.count(1);
    // cnt will give 1 or 0 depending on whether 1 is present or absent in the set respectively 
    s.insert(3);
    s.insert(5);
    auto it10= s.find(2);
    auto it11= s.find(4);
    s.erase(it10,it11); //after erase we will have 1,4,5
    //size empty and rest functions are similar to vector
    //cant index elements in a set
    auto it8=s.lower_bound(2);
    auto it9 = s.upper_bound(3);
    //explaination to be given later
    //everything happens in log n time complexity in set 

    //multiset

    multiset<int>ms;
    ms.insert(1);//1
    ms.insert(1);//1,1
    ms.insert(1);//1,1,1
    ms.insert(3);//1,1,1,3
    ms.insert(2);//1,1,1,2,3
    ms.insert(2);//1,1,1,2,2,3

    //ms.erase(1)//erases all 1's
    //ms.erase(ms.find(1))//deletes only 1 occurence of 1
    auto it7 = ms.find(1);
    advance(it7,2);
    ms.erase(ms.find(1),it7);
    //the above code was for basically deleting a specific number of a particular number

    unordered_set<int> stu;
    //lower bound and upper bound dont work
    //rest all are same as that of set
    //does not have the condtion of order 
    //does not have the condition of unique
    //worst case o(n) other wise usually constant time 

    //maps 

    map<int,int>mpp;
    map<int,pair<int,int>>mpp1;
    map<pair<int,int>,int>mpp2;
    mpp[1]=2;
    mpp.insert({2,4});
    mpp.emplace(3,1);
    mpp2[{2,3}]=10;
    for(auto it: mpp){
        cout<<it.first<<" "<<it.second<<endl; 
    }
    auto it69 = mpp.find(3);
    cout<<it69->second<<endl;
    //lower bound and upper bound work for keys in maps
    //erase size swap empty are same 









     
}
