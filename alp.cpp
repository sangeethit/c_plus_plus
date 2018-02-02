#include<iostream>
using namespace std;
int main()
{
    char x;
    cin>>x;
    if((x=='a'&&x=='z')||(x>='A'&&x<='Z'))
     cout<<"alphabet";
    else
     cout<<"no";
    return 0;
}
