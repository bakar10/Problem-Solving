#include <bits/stdc++.h>

using namespace std;

int main()
{ string s;
cin>>s;
int coun=0;
int te=0;
for(int i=0;i<s.size();i++){
    if(s[i]!= s[i+1]){
        coun++;
        te=0;
    }
    else{
        te++;
        if(te==5){
            coun++;
            te=0;

        }
    }
}
cout<<coun;
   }