#include<iostream>
using namespace std;
int main (){
int n;
int i;
cout<<"number of day"<<endl;
cin>>n;
int arr[n];
cout<<"elements"<<endl;
for(i=0;i<n;i++){
    cin>>arr[i];
}
cout<<endl;
int maxprice=arr[0];
for(i=1;i<n;i++){
  if(arr[i]>arr[0]){
    maxprice=arr[i];
  }
    
}
cout<<"maximum"<<maxprice<<" "<<i<<endl;
int minprice=arr[0];
for(i=1;i<n;i++){
    if(arr[0]>arr[i]){
        minprice=arr[i];
    }
}
cout<<"minimum"<<minprice<<" "<<i<<endl;
int average;
int sum =0;
for(i=0;i<n;i++){
    sum=sum+arr[i];
}
average=sum/n;
cout<<"average"<<" "<<average<<endl;
return 0;
}