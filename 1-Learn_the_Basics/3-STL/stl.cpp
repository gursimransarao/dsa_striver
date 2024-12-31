
#include <bits/stdc++.h>
using namespace std;

void explain_pair()
{

    pair<int, int> p = {1, 2};

    cout << p.first << "   " << p.second << endl;

    // nested pair
    pair<int, pair<int, int>> p1 = {1, {2, 3}};

    cout << p1.first << "   " << p1.second.first << "   " << p1.second.second << endl;
}

void explain_vector()
{

    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    cout << v[0] << endl;

    // using pair in vector

    vector<pair<int, int>> vpair;

    vpair.push_back({1, 2});

    cout << vpair[0].first << endl;

    // other methods of initialization

    vector<int> v5{1, 2, 3, 4, 5};
    // or we can use equal to sign
    vector<int> v8 = {1, 2, 3, 4, 5};

    vector<int> v1(5, 20); // {20,20,20,20,20}
    vector<int> v2(5);     //{0,0,0,0,0}
    vector<int> v3(v2);    // copies v2 into v3;

    // using iterators in vectors

    vector<int>::iterator it = v.begin(); // it points to memory at first element

    cout << *(it) << endl;

    it = it + 2;

    cout << *(it) << endl;

    vector<int>::iterator it1 = v.end(); // it points to memory after last element

    it1--;

    cout << *(it1) << endl;

    cout << *(v.begin()) << endl;

    cout << v.back() << endl
         << endl; // it directly returns reference to last element of vector

    // print vector
    cout << "printing vectors " << endl;
    for (auto it = v.begin(); it != v.end(); it++)
    {

        cout << *it << " ";
    }
    cout << endl;

    for (auto value : v)
    {
        cout << value << " ";
    }
    cout << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl
         << endl;

    // size of the vector
    cout << "Sizer of the vector is " << v1.size();

    // erase vector       // example {10,20,30,40,50}
    v.erase(v.begin());                // erases first element {20,30,40,50}
    v.erase(v.begin(), v.begin() + 2); // erases 20,30  [start,end)

    // cout << endl
    //      << endl;
    // for (auto value : v)
    // {
    //     cout << value << " ";
    // }
    // cout << endl;

    // insert in vector

    vector<int> v4(2, 100);       // [100,100]
    v4.insert(v4.begin(), 300);   //[300,100,100]
    v4.insert(v4.begin(), 2, 10); //[10,10,300,100,100]

    // pop back
    v4.pop_back(); //[10,10,300,100] pops the last element

    // swap
    v1.swap(v2); // swaps values in both vectors

    v4.clear(); // erases entire vector

    v4.empty(); // returns boolean to tell if vector is empty or not
}

void explain_list()
{
    // exactly similar to vector
    //  it also gives us front operations

    list<int> ls;

    ls.push_back(10);
    ls.push_back(20);
    ls.push_back(30);

    // front operation
    ls.push_front(0);

    // adding element in front in vector is costlier
    // reason - for vector, single linked list is maintained
    // while for list doubly linked list is maintained

    // rest of the functions are same as vector
}

void explain_deque()
{
    // similar to deque
}

void explain_stack()
{

    // uses LIFO
    stack<int> st;

    st.push(1); // [1]
    st.push(2); // [2,1]
    st.push(3); // [3,2,1]
    st.push(4); // [4,3,2,1]

    cout << "element at top is " << st.top(); // prints 4

    // there are no indexes in stack
    // there are only three main functions  - push, pop, top

    st.pop(); // remove top element which is 4 in our case;

    // time comlexity - every operation is O(1) in time
}

void explain_queue()
{
    // uses FIFO first in first out
    queue<int> q;

    q.push(1); //[1]
    q.push(2); //[2,1]
    q.push(3); //[3,2,1]
    q.push(4); //[4,3,2,1]

    q.back() += 5; // adds 5 to last element, which is 4

    cout << endl
         << q.back();

    q.pop(); // pops 1

    cout << endl
         << q.front();
}

void explain_priority_queue()
{
    priority_queue<int> pq;
    pq.push(10);
    pq.push(2);
    pq.push(3);
    pq.push(11);

    cout << pq.top();
}

void explain_set()
{

    // important functions are find, count and insert
    // only stores unique and in sorted manner
    set<int> s;
    s.insert(11);
    s.insert(2);
    s.insert(3);
    s.insert(15);
    s.insert(12);
    s.insert(12); // output = {2,3,12,15}

    // finding elements

    // auto it = s.find(12);  // returns an iterator pointing at that element
    auto it1 = s.find(26); //  it will return set.end()

    // erase
    s.erase(3); // removes 3 from set
    // we can also pass iterator to erase
    // we can also use s.erase(s.begin(), s.begin()+3);

    // count
    int ct = s.count(11); // returns 1 or 0, if element is present its count will be 1 as it unique

    // lower bound and upper bound
    auto it = s.lower_bound(4);
    // auto it = s.upper_bound(10);

    // if we initialize set like this, it will remove duplicate values by itself
    set<int> s1{1, 3, 4, 1};
    for (auto value : s1)
    {
        cout << " " << value;
    }

    // everything takes log n time
}

void explain_multi_set()
{
    // everything is same as set but it also stores duplicates
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    ms.erase(1); // erases all 1's

    // only a single one is erased
    ms.erase(ms.find(1));

    // you cannot erase a range like this because elements are not stored in contigous manner
    // ms.erase(ms.find(1), ms.find(1) + 1);
}

void explain_Uset()
{

    // stores unique but not stored in sorted manner
    unordered_set<int> st;
    // all operations mostly take O(1) which is better than set

    // lower bound and upper bound doesn't work rest functions are same as set
}

void explain_map()
{
    // works in key value pair
    // keys are unique and stored in sorted order
    map<int, int> mp;

    mp[1] = 2; //{1,2}
    mp[3] = 4; //{1,2} {3,4}

    map<int, pair<int, int>> mp1;

    mp1[6] = {8, 9};

    cout << mp1[6].first;
    map<pair<int, int>, int> mp2;

    mp2[{1, 2}] = 3;
    cout << "mp2 is :" << mp2[{1, 2}] << endl;

    // find
    auto it = mp.find(2);
}

void explain_multi_mapp()
{
    // store duplicate keys but sorted
}

void explain_Umapp()
{
    // unique keys but not sorted
    // every operation takes mostly O(1)
}
int main()
{

    // explain_pair();
    // explain_vector();
    // explain_list();
    // explain_deque();
    // explain_stack();
    // explain_queue();
    // explain_priority_queue();
    // explain_set();
    // explain_multi_set();
    // explain_Uset();
    explain_map();
    // explain_multi_mapp();
    // explain_Umapp();
    // 231 and 218
    return 0;
}