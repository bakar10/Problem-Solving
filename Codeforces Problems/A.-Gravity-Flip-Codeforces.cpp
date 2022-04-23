#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
int arr[100];
int m,x;
cin>>x;
for(int i=0;i<x;i++){
    cin>>arr[i];
}
sort(arr,arr+x);
for(int i=0;i<x;i++){
    cout<<arr[i]<<" ";
}

}