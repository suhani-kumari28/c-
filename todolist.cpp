#include<iostream>
#include<fstream>
#include<vector>
#include<string>
using namespace std;
const string password="suhani28";
const string filename="tasks.txt";
//login check
bool login(){
    string input;
    cout<<"enter password:";
    cin>>input;
    return input ==password; 
}
//load task
void loadtasks(vector<string>& tasks,vector<bool>& status){
    ifstream file(filename);
    string line;
    string done;
    while(getline(file, line, '|')&&
     getline(file,done))
        {
        tasks.push_back(line);
        status.push_back(done=="1");
        }
        file.close();
}
        //save task
        void savetasks(const vector<string>&tasks,const vector<bool>&status){
ofstream file(filename);
for(size_t i=0;i<tasks.size();++i){
    file<<tasks[i]<<"|"<<(status[i]?"1":"0")<<endl;
}
file.close();
}
//display tasks
void showtasks(const vector<string>&tasks,const vector<bool>&status){
if (tasks.empty()){
cout<<"no task available."<<endl;
return ;
}
for(size_t i=0;i<tasks.size();++i){
    cout<<i+1<<" "<<tasks[i]<<" _"<<(status[i]?"done":"not done")<<endl;
}
}
//add task
void addtasks(vector<string>&tasks, vector<bool>&status){
    cin.ignore();
    string task;
    cout<<"enter  task description: "<<endl;
    getline(cin,task);
    tasks.push_back(task);
    status.push_back(false);
    cout<<"task added"<<endl;
}
//mark as done
void marktasks( vector<string>&tasks, vector<bool>&status){
    int index;
    cout<<"enter task number to maerk as done:";
    cin>>index;
    if(index<1||index>static_cast<int>(status.size())){
        cout<<"invalid task number"<<endl;
        return;
    }
    cout<<"marked as done"<<endl;
}
//delete task
void deletetasks( vector<string>&tasks, vector<bool>&status){
    int index;
    cout<<"enter task number to delete:";
    cin>>index;
if(index<1||index>static_cast<int>(status.size())){
        cout<<"invalid task number"<<endl;
        return;
}
tasks.erase(tasks.begin()+index-1);
status.erase(status.begin()+index-1);
cout<<"task deleted"<<endl;
}

int main (){
if(!login()){
    cout<<"incorrect password"<<endl;
    return 1;
}
vector<string>tasks;
vector<bool>status;
loadtasks(tasks,status);
int choice;
do{
    cout<<"*** to do list ******"<<endl;
    cout<<"1.show tasks"<<endl;
    cout<<"2.add tasks"<<endl;
    cout<<"3.mark tasks as done"<<endl;
   cout<<"4.deletetasks"<<endl;
    cout<<"5.save & exit tasks"<<endl;
     cout<<"enter your choice"<<endl;
    cin>>choice;
    switch(choice){
       case1:showtasks(tasks,status);break;
        case2:addtasks(tasks,status);break;
         case3:marktasks(tasks,status);break;
          case4:deletetasks(tasks,status);break;
           case5:savetasks(tasks,status);
           cout<<"tasks saved goodbye"<<endl;
           break;
           default:
           cout<<"invalid choice";
        
        
    }

   
}while (choice!=5);

return 0;
}