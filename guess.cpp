#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main (){
int secretnumber,guess;
srand(time(0));
secretnumber=rand()%100+1;
cout<<"guess the number between 1 and 100"<<endl;
do{
    cout<<"enter your guess"<<endl;
    cin>>guess;
    if(guess>secretnumber){
        cout<<"too high"<<endl;
    }else if(guess<secretnumber){
        cout<<"too low"<<endl;
 } }while(guess!=secretnumber);
    cout<<"you guessed it"<<endl;
return 0;
}