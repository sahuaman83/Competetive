#include <iostream>
#include <vector>
using namespace std;
int a = 0;
void ans(vector<int>& v, vector<int> vv, int idx){
    if(vv.size() == 3){
        a++;
        return;
    }

    for(int i = idx; i < v.size(); i++){
        if(vv.empty() || vv.back() > v[i]){
            vv.push_back(v[i]);
            ans(v, vv, i + 1);
            vv.pop_back();
        }
    }
}
int main(){
    vector<int> v = {4,2,2,1};
    vector<int> vv;
    ans(v, vv, 0);
    cout << a;
    return 0;
}