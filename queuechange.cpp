#include<iostream>
#include<string>
using namespace std;

string s;
 
int main()
{
    cin>>s;
    int ans1=0;
    int ans2=0;
    int lth=s.size();
    int count1=0;
    int count2=0;
    for(int i=0;i<lth;i++)
    {
        if(s[i]=='B')
        {
            ans1=ans1+i-count1;
            count1++;
        }
        else
        {
            ans2=ans2+i-count2;
            count2++;
        }
    }
    if(ans1<ans2)
    {
        cout<<ans1;
    }
    else
    {
        cout<<ans2;
    }
    return 0；
}
