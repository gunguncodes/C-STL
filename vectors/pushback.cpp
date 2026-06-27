#include<iostream>
#include<vector>

using namespace std;

int main() {
vector<int> v;
int n,x;

cout <<"Enter size of the elements : ";
cin>>n;

cout<<"Enter "<<n<<" elements:\n";
for(int i=0;i<n;i++) {
    cin>>x;
    v.push_back(x);
}

cout<<"Vector : "<<endl;
for(int i=0;i<v.size();i++) {
    cout<<v[i]<<" ";
}


return 0; 

}