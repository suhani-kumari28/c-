#include<iostream>
using namespace std;
int main (){
const int correctpassward=1234;
int passward;
do{
    cout<<" enter passward"<<endl;
    cin>>passward;
}while(passward!=correctpassward);
cout<<"access granted"<<endl;

return 0;
}