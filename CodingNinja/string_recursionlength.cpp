#include<iostream>
using namespace std;
void remv(char s[])
{
    if(s[0]=='\0'){
        return;
    }
    if(s[0]!='x')
    {
        remv(s+1);
    }
    else
    {
        int i=1;
        for(;s[i]!='\0';i++)
        {
            s[i-1]=s[i];
        }
        s[i-1]=s[i];
        remv(s);
    }
}
int length(char s[])
{
    if(s[0]=='\0'){
        return 0;
    }
    int smallstr=length(s+1);
    return 1+smallstr;
}
int main()
{
    char str[100];
    cout<<"enter the string "<<endl;
    cin>>str;
    int len=length(str);
    cout<<len<<endl;
    cout<<"Before removing "<<str<<endl;
    remv(str);
    cout<<"After removing "<<str<<endl;
    len=length(str);
    cout<<"Now length is "<<len<<endl;

}
