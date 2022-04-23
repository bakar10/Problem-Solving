#include <iostream>

using namespace std;

int main()
{
   int x;
   cin>>x;
   string m,n;
   if(x%2==0){
    m="I love it";
   }
   else {m="I hate it";}
   n="I hate that I love that " ;

   if(x==1){
    cout<<m;
   }
   else if(x==2){
    cout<<"I hate that I love it";
   }
   else if(x==3){
    cout<<n<<m;
   }
   else if(x>3){
    if(x%2==0){
        for(int i=0;i<(x/2)-1;i++){
            cout<<n;
        }
        cout<<"I hate that "<<m;

    }
    else {
         for(int i=0;i<(x/2);i++){
            cout<<n;
        }
        cout<<m;


    }

   }





}