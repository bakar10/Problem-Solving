#include <iostream>

using namespace std;

int main()
{
    int a,b,z;
    cin>>a>>b;
    if(a>b){
        z=a-b;
        cout<<b<<" "<<z/2;
    }
    else if (b>a){

        z=b-a;
        cout<<a<<" "<<z/2;
    }
    else{
        cout<<a<<" "<<0;
    }


}