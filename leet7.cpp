#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="Book";
     int count1=0;
        int count2=0;
       
    int len=s.length();
    for( int i=0;i<len/2;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            count1++;
        }
    }
    for(int i=len/2;i<len;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
    {
           count2++;
    }
    }
    if(count1==count2)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    
}