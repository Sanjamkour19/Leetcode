#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int sum1=0;
    int sum2=0;
    int sum=0;
    vector<vector<int>>arr={{1,2,3},
                            {4,5,6},
                            {7,8,9}};
for(int i=0;i<arr.size();i++)
{
    for(int j=0;j<arr.size();j++)
    {
        if(i==j)
        {
            sum1+=arr[i][j];
        }
        if(i+j==arr.size()-1&& i!=j)
        {
            sum2+=arr[i][j];
        }

    }
}
cout<<sum1<<endl<<sum2<<endl;
sum=sum1+sum2;
cout<<sum;
}