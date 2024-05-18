#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long
#define ld long double
#define fs(n) cout<< fixed<<setprecision(n)
#define INF 0x3f3f3f3f3f3f3f3fLL
int dx[] = {1, 0, -1, 0, -1, -1, 1, 1};
int dy[] = {0, -1, 0, 1, -1, 1, -1, 1};
//------------------------------------------------------------------------------
class heap {
    vector<int> tree;
    void sift_down(int p) {
        int l = p * 2 + 1;
        int r = p * 2 + 2;
        if (l >= (int) tree.size()) {
            return;
        }
        if (r < (int) tree.size()) {
            if (tree[l] < tree[r])swap(tree[l], tree[r]);
        }
        if (tree[p] < tree[l]) {
            swap(tree[p], tree[l]);
            sift_down(l);
        }
    }
    void sift_up(int ch){
        if(ch==0)return;
        int p=ch-1;
        p/=2;
        if(tree[p]<tree[ch]){
            swap(tree[p],tree[ch]);
            sift_up(p);
        }
    }
public:
    heap()= default;
   explicit heap(const vector<int>&vec){
        tree=vec;
        int sz= tree.size();
        sz--;
        for (int i = (sz-1)/2; i>=0; --i) {
            sift_down(i);
        }
    }
    void push(int val){
        tree.push_back(val);
        sift_up((int)tree.size()-1);
    }
    int top(){
        return  tree.front();
    }
    bool empty(){
        return tree.empty();
    }
    int size(){
        return (int)tree.size();
    }
    void pop(){
        tree.front()=tree.back();
        tree.pop_back();
        sift_down(0);
    }
};
int main() {
    fast
    int t = 1;
//    cin >> t;
    while (t--) {

    }
}