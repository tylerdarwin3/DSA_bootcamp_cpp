#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    vector<int> v2;
    for (int i = n - 1; i >= 0; i--) {
        v2.push_back(v[i]);
    }
    for (int i = 0; i < n; i++) {
        cout << v2[i] << " ";
    }
    return 0;
}