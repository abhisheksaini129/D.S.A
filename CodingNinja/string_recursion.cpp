#include<iostream>
using namespace std;

void removdup(char s[])
{
    if(s[0]=='\0')
    {
        return;
    }
    removdup(s+1);
        if(s[0]==s[1])
        {
            int j=1;
            for(;s[j]!='\0';j++)
            {
                s[j-1]=s[j];
            } s[j-1]=s[j];
        }
        else
            return;
}
int main()
{
    char s[100];

    cout<<"string ??"<<endl;
    cin>>s;

    cout<<s<<endl;
    removdup(s);
    cout<<s<<endl;
   //return 0;
}
