#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    
   ll int t;
   cin>>t;
   while(t--)
   {
       int a[3];
       int i,x=0,y;
       for(i=0;i<3;i++)
       cin>>a[i];
       sort(a,a+3,greater<int>());
      int d,e;
      cin>>d>>e;
      for(i=0;i<3;i++)
      {
          if(e>=a[i])
          {
          x++;
          y=i;
          break;
          }
      }
      if(x==0)
      {
          cout<<"NO"<<endl;
      }
      else
      {
          int s=0;
          for(i=0;i<3;i++)
          {
              if(i==y)
              continue;
              else
              s+=a[i];
          }
          if(s<=d)
          cout<<"YES"<<endl;
          else
          cout<<"NO"<<endl;
      }
      
   }

}

