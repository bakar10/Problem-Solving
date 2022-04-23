#include <bits/stdc++.h>

using namespace std;

int main()
{ int n;
cin>>n;
int g,h,coun1=0,coun2=0;
for(int i=0;i<n;i++){
    cin>>g>>h;
    if(g>h){
        coun1++;
    }
    else if(h>g){
        coun2++;
    }
}
if(coun1>coun2){
    cout<<"Mishka";
}
else if(coun2>coun1){
    cout<<"Chris";
}
else{
    cout<<"Friendship is magic!^^";
}
   }
