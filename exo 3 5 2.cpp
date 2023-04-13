#include<iostream>
#include <cstring>
//
using namespace std;
int main ()
{
    char s[]="hello world";
    char *ptr=s;
    strcat(s,"goodbye world");
    cout<<s<<endl;
    strcat(s,"this is a very long string that will cause a buffer overflow ");// uffer overflow
    cout<<s;



}
