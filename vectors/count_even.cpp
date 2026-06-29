#include<iostream>
#include<vector>

using namespace std;

int main () {
    vector<int>v;
    int x,n;

    cout<<"Enter the size of the vector : ";
    cin>>n;
    cout<<"Enter "<<n<<" elements\n";
    for(int i=0;i<n;i++) {
        cin>>x;
        v.push_back(x);
    }

    int count = 0;
    for(int i=0;i<v.size();i++) {
        if (v[i]%2 == 0) {
            count++;
        }
    }

    cout<<"Number of even numbers in the vector is "<<count;

    return 0;
}