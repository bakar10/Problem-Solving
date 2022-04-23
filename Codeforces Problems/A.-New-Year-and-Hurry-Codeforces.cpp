#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x,y,q,n,o;
    n=0;
    o=0;
    cin>>x>>y;
    int z=0;
    for(int i=0;i<=x;i++){

        z=z+(5*i);


    }
    q=240-y;
    if(q>z){
        cout<<x;
    }
    else if(z>q) {
            for(int v=1 ; v<=x;v++){
                n+=(5*v);
                if(n>q) break;
                o=o+1;
            }
            cout<<o;





    }
    else if(z=q){
        cout<<x;
    }

}