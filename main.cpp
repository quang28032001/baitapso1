#include <iostream>
#include<math.h>
using namespace std;
int i,j,n,k,h,m,y;
int d=1;
int so[10000000];
int main()
{
    cin>>y;
cin>>n;
   for (int i=1;i<=n;)
    {

        d++;
        int k=0;
        for(j=0;j<=d;)
        {
            j++;
            if(d%j==0) k=k+1;
        }
        if(k==2)
        {so[i]=d;

            m=so[i];
            for(;m>0;)
            {
                if(m%10==y){ h=h+1; break;}
                m=m/10;
            }
            i++;}


    }
cout<<h;
    return 0;
}
