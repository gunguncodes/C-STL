#include <iostream>
#include <vector>
#include <algorithm>

 using namespace std;

 int main() {

    vector<int>v;
    int x,n;

    cout<<"Enter the size of the elements : ";
    cin>>n;

    cout<<"Enter "<<n<<" elements:";
    for(int i=0;i<n;i++) { 
        cin>>x;
        v.push_back(x);
    }

    cout<<"Elements before sorting : "<<endl;
    for(int i=0;i<v.size();i++) {
       cout<<v[i]<<" "; 
    }

    sort(v.begin(), v.end());
    cout<<"\nElements after sorting : "<<endl;
    for(int i=0;i<v.size();i++) {
       cout<<v[i]<<" "; 
    }


}