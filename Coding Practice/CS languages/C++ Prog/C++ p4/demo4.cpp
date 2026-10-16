#include <bits/stdc++.h>
using namespace std;
//=======================stl=============================
void pracPair(){
    pair<int,int> p = {1,3};
    cout << p.first <<" & " << p.second << endl;
    pair<int, pair <int, int>> p2 = {3, {5,9}};
    cout << p2.first <<", "<< p2.second.first <<" & "<< p2.second.second << endl;
    pair<int,int> arr[] = { {1,2}, {2,4}, {3,6}};
    cout << arr[2].first << endl;
}
void pracVector(){
    vector<int> v;
    v.push_back(5);
    v.emplace_back(2); 
    cout << "v done" << endl; // v = (5,2)
    vector<pair<int,int>> v2;
    v2.push_back({2,2});
    v2.emplace_back(5,7);
    cout << "v2 done" << endl; // v2 = ({2,2}, {5,7})
    vector<int> v3(5,100); // v3 = (100, 100, 100, 100, 100)
    vector<int> v4(5); // v4 = (0,0,0,0,0)
    vector<int> v5(v3); // v5 = copy of v3;
    cout << "v3, v4, v5 done" << endl;

    vector<int> :: iterator it = v.begin();
    cout << *it << endl;
    vector<int> :: iterator it2 = v.end();
    vector<int> :: reverse_iterator it3 = v.rend(); // r = follow reverse order
    vector<int> :: reverse_iterator it4 = v.rbegin();
    cout << v[1] << endl;
    for (vector<int>::iterator it = v.begin(); it < v.end(); it ++){
        cout << *it << " ";
    }
    for (auto it = v.begin(); it < v.end(); it ++){
        cout << *it << " ";
    }
    for(auto it : v){
  cout << it << " ";
    }

    // let v = {10,20,30,40,50} // Range deletion me erase = [st, end)
    v.erase(v.begin() + 1); // Element delete {10,20,30,40,50} --after erase {10,30,40,50}
    v.erase(v.begin()+1,v.begin()+3); // Range delete {10,20,30,40,50} --after erase {10,40,50}

    //insert
    vector<int> v6(2, 100); // v = {100, 100}
    v.insert(v.begin(), 300); // v = {300, 100, 100}
    v.insert(v.begin() + 1, 2,10); // v = {300, 10, 10, 100, 100}
    vector<int> copy(2, 50); // v = {50, 50}
    v.insert(v.begin(), copy.begin(), copy.end()); // v = {50, 50, 300, 10, 10, 100, 100}
    
    cout << v6.size();
    // v= {10,20}
    v.pop_back(); // v = {10} --delete last item
    // v = {10,20} , v3 = {30, 40}
    v.swap(v3); // v = {30, 40} , v3 = {10,20}
    v.clear(); // clears entire vector
    cout << v.empty() << endl; // tells empty or not
}
void pracList()
{
    list<int> ls;
    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2,4}
    ls.push_front(5); // {5,2,4}
    ls.emplace_front(1); // {1,5,2,4}
    cout << "ls done" << endl;
    list<pair<int,int>> ls2;
    ls2.push_back({2,2});
    ls2.emplace_back(5,7);
    cout << "ls2 done" << endl;
    list<int> ls3(5,100);
    list<int> ls4(5);
    list<int> ls5(ls3);
    cout << "ls3, ls4, ls5 done" << endl;
    list<int>::iterator it = ls.begin();
    cout << *it << endl;
    list<int>::iterator it2 = ls.end();
    list<int>::reverse_iterator it3 = ls.rend(); // r = follow reverse order
    list<int>::reverse_iterator it4 = ls.rbegin();
    // list does not support [] operator
    // cout << ls[0] << endl;
    cout << *ls.begin() << endl;
    // list does not support < operator for iterators
    for (list<int>::iterator it = ls.begin(); it != ls.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    for (auto it = ls.begin(); it != ls.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    for(auto it : ls)
    {
        cout << it << " ";
    }
    cout << endl;
    // let ls = {10,20,30,40,50}
    // Range deletion me erase = [st, end)
    list<int> eraseList = {10,20,30,40,50};
    eraseList.erase(next(eraseList.begin(), 1));
    // Element delete
    // {10,20,30,40,50}
    // after erase {10,30,40,50}
    eraseList.erase(
        next(eraseList.begin(), 1),
        next(eraseList.begin(), 3)
    );
    // Range delete
    // {10,30,40,50}
    // after erase {10,50}

    // insert
    list<int> ls6(2, 100); // ls = {100, 100}
    ls6.insert(ls6.begin(), 300);
    // ls = {300, 100, 100}
    ls6.insert(next(ls6.begin(), 1), 2, 10);
    // ls = {300, 10, 10, 100, 100}
    list<int> copy(2, 50); // ls = {50, 50}
    ls6.insert(ls6.begin(), copy.begin(), copy.end());
    // ls = {50, 50, 300, 10, 10, 100, 100}
    cout << ls6.size() << endl;
    // ls = {10,20}
    ls6.pop_back();
    // ls = {10}
    // delete last item
    // ls = {10,20} , ls3 = {30,40}
    ls6.swap(ls3);
    // ls6 = {30,40} , ls3 = {10,20}
    ls.clear();
    // clears entire list
    if(ls.empty())
    {
        cout << "list is empty" << endl;
    }
    else
    {
        cout << "list is not empty" << endl;
    }
}
void pracStack(){
    stack<int> st; // LIFO
    st.push(1); // {1}
    st.push(2); // {2, 1}
    st.push(3); // {3,2,1}
    st.push(3); // {3,3,2,1}
    st.emplace(5); // {5,3,3,2,1}

    cout << st.top() << endl; // prints 5 --st[] is invalid
    st.pop(); // st = { 3,3,2,1}
    cout << st.top() << endl; // {3}
    cout << st.size() << endl; // 4
    cout << st.empty() << endl; // 0 (false) or 1 {true}
    stack<int> st2, st3;
    st2.swap(st3);
}
void pracQueue(){
    queue<int> q; // FIFO
    q.push(1); // {1}
    q.push(2); // {1, 2}
    q.emplace(4); // {1,2,4}
    q.back() += 5;
    
    cout << q.back() << endl; // 9
    // q = {1,2,9}
    cout << q.front() << endl; // 1

    q.pop();
    cout << q.front() << endl; // 2
    cout << q.size() << endl;
    cout << q.empty() << endl;
    queue<int> q2, q3;
    q2.swap(q3);
}
void pracPriorityQueue(){
    priority_queue<int> pq;
    pq.push(5); // {5}
    pq.push(2); // {5, 2}
    pq.push(8); // {8,5,2}
    pq.emplace(10); // {10,8,5,2}

    cout << pq.top() << endl; // 10
    pq.pop();
    cout << pq.top() << endl; // pq = {8,5,2}
    cout << pq.size() << endl;
    cout << pq.empty() << endl;
    priority_queue<int> pq2, pq3;
    pq2.swap(pq3);
    
    //min heap
    priority_queue<int, vector<int>, greater<int>> pq4;
    pq4.push(5); // {5}
    pq4.push(2); // {2, 5}
    pq4.push(8); // {2,5,8}
    pq4.emplace(10); // {2,5,8,10}

    cout << pq.top() << endl;
}
void pracSet(){
    set<int> st; // { unique and sorted data }
    st.insert(1); // {1}
    st.emplace(2); // {1,2}
    st.insert(2); // {1, 2}
    st.insert(4); // { 1, 2, 4}
    st.insert(3); // {1,2,3,4}

    /* Functionality of insert in vector can also be used, 
       that only increases efficiency */
    // begin(), end(), rbegin(), rend(), size(), empty() and swap() same as above

    // st = {1,2,3,4}
    auto it = st.find(3);
    auto it2 = st.find(5);
    st.erase(5); // takes log time

    int cnt = st.count(1); // if exists = 1, if not exists = 0

    auto it3 = st.find(3);
    st.erase(it); // takes constant time

    set<int> st2 = {1,2,3,4};
    auto it4 = st2.find(2);
    auto it5 = st2.find(3);
    st2.erase (it4,it5);

    // lower_bound amd upper_bound works in same way as in vector it does
    // syntax
    auto it6 = st2.lower_bound(1);
    auto it7 = st2.upper_bound(4);
}
void pracMultiSet(){
    multiset<int> ms; // Sorted data. Unlike set, duplicate can be stored
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.erase(1); // all 1's erased

    int cnt = ms.count(1);
    ms.erase(ms.find(1)); // Single element 1 erased 
    
    auto it = ms.find(1);
    ms.erase(it, next(it, 2));// ms = {1} left

    // Rest all func same as set
}
void pracUnorderedSet(){
    unordered_set<int> st; // Same as set but unordered manner --unique unsorted data
    /* Lower bound and upper bound functions doesn't work*/
    // rest all functions are same
    /* as above,  it doesn,t stores in any particular order. It has better complexity than set
       in most cases, except some when collision happens */
}
void pracMap(){
    map<int, int> mpp; // stores in key value pair --Key => unique, sorted
    map<int, pair<int, int>> mpp1;
    map<pair<int, int>, int> mpp2;
    mpp[1] = 2;
    mpp.emplace(3,1);
    mpp.insert({2,4});

    mpp2[{2,3}] = 10; 

    for (auto it : mpp){
        cout << it.first << " " << it.second << endl;
    }
    
    cout << mpp[1] << endl; // 2
    cout << mpp[5] << endl; // 0 (does not exist)
    auto it = mpp.find(3);
    cout << it->first << endl;   // key: 3
    cout << it->second << endl;  // value: 1
    auto it2 = mpp.find(5); // points mpp.end() bcz it doesn't exist

    // lower_bound amd upper_bound works in same way as in vector it does
    // syntax
    auto it3 = mpp.lower_bound(1);
    auto it4 = mpp.upper_bound(4);

    // erase, swap, size, empty, are same as above
}
void pracMultiMap(){
    multimap<int, int> mmp;
    // everything same as map, only it stores duplicate keys, sorted manner
    // only mpp[key] cannot be used here
}
void pracUnorderedMap(){
    unordered_map<int, int> mmp;
    // everything same as map but it doesn't store in sorted manner
    // Unique unsorted data
}

// Extra
bool comp(pair<int, int>p1 , pair<int, int>p2){
    if (p1.second < p2.second) return true; // sort acc to 2nd element
    if (p1.second > p2.second) return false;
    if (p1.first > p2.first) return true; // if 2nd element is same then sort acc to 1st element in desc
    return false;
}

void pracExtra(){
    pair<int, int> arr[] = {{1,2}, {2,3}, {4,2}, {3,4}};
    sort(begin(arr), end(arr)); // or sort(arr, arr + 4);
    for (auto it : arr) {
    cout << it.first << " " << it.second << endl;
    }    

    // sorting according to second element
    // is second element is same then sort it according first element but in desc
    sort(begin(arr), end(arr), comp);
    for (auto it : arr) {
    cout << it.first << " " << it.second << endl;
    }

    int num = 7;
    int cnt = __builtin_popcount(num); // returns number of set bits (number of 1), i.e, 3
    cout << cnt << endl;

    string s = "187";
    sort(s.begin(), s.end());
    do{
        cout << s << endl;
    } while (next_permutation(begin(s), end(s)));
}

int main(){
    // pracPair();
    // pracVector();
    // pracList();
    // pracStack();
    // pracQueue();
    // pracPriorityQueue();
    // pracSet();
    // pracMultiSet();
    // pracUnorderedSet();
    // pracMap();
    // pracMultiMap();
    // pracUnorderedMap();

    pracExtra();

    //
    return 0;
}