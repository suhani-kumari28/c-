#include<iostream>
using namespace std;
int main (){
char grade;
cout<<"enter the letter grade( A,B,C,D,E):"<<endl;
cin>>grade;
switch(grade){
case 'A':
cout<<"excellent work"<<endl;
break;
case 'B':
cout<<"good job"<<endl;
break;
case 'C':
cout<<"average"<<endl;
break;
case 'D':
cout<<"below average"<<endl;
break;
case 'E':
cout<<"fail"<<endl;
break;
default:
cout<<"invalid grade"<<endl;
}
return 0;
}