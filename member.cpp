#include <iostream>
using namespace std;
class test
{
int code;
static int count; // static member variable public:
public:
void setcode (void){
code =++count;
}
void showcode (void)
{
cout << "object number:"<< code << "\n";
}
static void showcount (void) // static member function
{
cout << "count: " << count << "\n";
}
};
int test :: count;
int main()
{
test t1, t2;
t2.setcode();
t1.setcode();
test:: showcount();
test t3;
t3.setcode ();
test :: showcount();
t1.showcode();
t2.showcode();
t3. showcode();
return 0;
}