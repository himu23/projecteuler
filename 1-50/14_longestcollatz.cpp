//most dificult for me till now
//learned a bit more about recursions and vectors
//did it before learning dp
#include "bits/stdc++.h"
#define int long long
#define uint unsigned long long
#define vi vector<int>
#define pb push_back
#define sc static_cast
using namespace std;
int32_t coll(int n, int count=0, vi* v=nullptr){
    if (v!= nullptr) {
        v->pb(n);
    }
    count++;
    if(n==1) return count;
    if(n%2==0) return coll(n/2,count, v);
    else return coll(3*n+1,count, v);
}
bool findandremove(vi& vec, int n){
    auto it=find(vec.begin(),vec.end(), n);
    if (it != vec.end()) {
        vec.erase(it);
        return true;
    } else {
        return false;
    }
}
int32_t main() {
    int ans=0;
    int b=1;
    vi v;
    coll(999999,0,&v);
    vi w;
    for(int i=1;i<=1000000;i++){
        w.pb(i);
    }
    for(auto it= v.begin(); it!= v.end(); ++it) {
        findandremove(w,*it);
    }
    int ans=999999;
    for(auto it= w.end(); it!= w.begin(); --it){
        
    }
    return 0;
}