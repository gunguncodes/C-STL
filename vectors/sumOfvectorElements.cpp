#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int>v;
    int n,x;

    cout<<"Enter the size of the elements: ";
    cin>>n;

    cout<<"Enter "<<n<<" elements:\n";
    for(int i=0; i<n; i++) {
        cin>>x;
        v.push_back(x);
    }
    
    int sum = 0;
    for(int i=0;i<v.size();i++) {
        sum += v[i];
    }

    cout<<"Sum of vector elements : "<<sum;

    return 0;

}