#include <iostream>

using namespace std;

int main()
{
int n,x,z,m;
x=0;

m=0;
cin>>n;
for(int i=0;i<n;i++){

  cin>>z;
  if (z>=0){
    x=x+z;
  }
  if(z==-1){

    if(x<1){
        m=m+1;
    }
    else {x=x-1;}




  }
}
cout<<m;



}