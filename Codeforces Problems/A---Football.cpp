#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
   int n,coun1=1,coun2=0;
   string m,h,g;

   cin>>n;

   cin>>m;
   if(n>1){
   for (int i=0;i<n-1;i++){
    cin>>h;

    if(h==m){
        coun1++;
    }
    else{
        coun2++;
        g=h;
    }
   }
   if(coun1>=coun2){
    cout<<m;
   }
   else{
cout<<g;
   }
     }
     else{
        cout<<m;
     }}