  
  #include<iostream>
  #include<string>
  using namespace std;
  int main()
  {

  string s="HELLO";
  for(int i=0;i<s.size();i++)
        {
            if(s[i]<='Z' && s[i] >='A')
            {
                s[i]=s[i]+32;
            }
        }
        cout<<s;
  }