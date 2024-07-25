#include<iostream>
#include<vector>
using namespace std;
int main()
{
     int flag=0;

    vector<vector<int>>meet={{7,10},{2,4}};
    for(int i=0;i<meet.size();i++){
         
      for(int j=0;j<meet[i].size();j++)
       {
          if(meet[i+1].begin()<meet[i].end())
          {
           
           flag++;
           break;
          }
          
        }
        if(flag==1)
        {
            break;
        }
    }

    if(flag==1)
    {
        cout<<"False";
    }
    else{
        cout<<"True";
    }
   

}