#include <iostream>
#include <vector>
#include <algorithm>

 using namespace std;

 int main() {

    vector<int>v;
   int x,n;

   cout<<"Enter the size of the vector: ";
   cin>>n;

   cout<<"Enter "<<n<<" elements :"<<endl;
   for(int i=0; i<n; i++ ) {
       cin>>x;
       v.push_back(x);
    }

    cout<<"Vector : "<<endl;
    for(int i=0;i<v.size();i++) {
       cout<<v[i]<<" "; 
    }

    sort(v.begin(),v.end());
    cout<<"\nVectors after sorting : "<<endl;
    for(int i=0;i<v.size();i++) {
       cout<<v[i]<<" "; 
    }

    int key=0;
    cout<<"\nEnter the element to be search : ";
    cin>>key;

    bool found = binary_search(v.begin(), v.end(), key);

    if(found) {
        cout<<"Element found."<<endl;
    }
    else {
        cout<<"Element not found.";
    }

}