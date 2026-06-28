#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> v;
    int num,x;

    cout<<"Enter size of the elements :";
    cin>>num;

    cout<<"Enter "<<num<<" elements :\n";
    for(int i=0; i<num ; i++) {
        cin>>x;
        v.push_back(x);
    }

    cout<<"Vector : "<<endl;
    for(int i=0;i<v.size();i++) {
        cout<<v[i]<<" ";
    }

    cout<<"\nFirst element : "<<v.front();
    cout<<"\nLast element : "<<v.back();
    cout<<"\nSize : "<<v.size();

    v.pop_back();
    cout<<"\nAfter pop_back() :\n";
    for(int i=0;i<v.size();i++) {
        cout<<v[i]<<" ";
    }

    return 0;
}