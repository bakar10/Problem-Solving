#include <bits/stdc++.h>

using namespace std;

int main()
{ long long n;
cin>>n;
long long coun=0;
if(n%2!=0){
    coun=-((n+1)/2);
}
else{
    coun=(n/2);
}

cout<<coun;
   }