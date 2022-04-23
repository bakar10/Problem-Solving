#include <bits/stdc++.h>
#include <string>
using namespace std;




int main()
{
long long n;
cin>>n;
long long l,k;

for(int i=0;i<n;i++){
    cin>>l>>k;
    cout<<k%max(l,(k+2)/2)<<endl;


}


}
