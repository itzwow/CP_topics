#include<bits/stdc++.h>
using namespace std;
#define ll long long

void print(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// Custom comparator function
bool comp(pair<int,string>a, pair<int,string>b){

    // jis order me chahie usi ko return kar do
    if(a.first != b.first)return a.first < b.first;
    return a.second > b.second; // if(first values are equal then arrange 2nd values in descending order)
}
 
int main()
{
    vector<int> arr;
    int n;
    cin>>n;
    // for(int i=0;i<n;i++){
    //     int temp;
    //     cin>>temp;
    //     arr.push_back(temp);
    // }

    vector<pair<int,string>>m;
    for(int i=0;i<n;++i){
        int temp;
        string s1;
        cin>>temp>>s1;
        m.push_back({temp,s1});
    }

    // sort(arr.begin(), arr.end()); // ascending order
    sort(m.begin(), m.end(), comp); // Descending order
    // print(m);
    for(int i=0;i<n;i++){
        cout<<m[i].first<<" "<<m[i].second<<endl;

    }
    return 0;
}