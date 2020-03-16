#include <iostream>
#include<math.h>
using namespace std;

float a[30][30];
float b[30][30];

float d;
int main()
{
   int x,y,m,n;
   cin>>x>>y;

int i,j,h,k,p,q,l;
    for(i=0;i<x;)
    {
        for(j=0;j<y;)
        {
            cin>>a[i][j];
            j++;
        }
        i++;
    }
    cin>>m>>n;

    for(p=0;p<m;)
    {
        for(q=0;q<n;)
        {
            cin>>b[p][q];
            q++;
        }
        p++;
    }

    for(h=0;h<x;)
    {
        for(k=0;k<y;)
        {

          for(l=0;l<=y;)
          {
              d=d+a[h][l]*b[l][k];
              l++;
          }
          cout<<d<<" ";
          k++;
        }
        cout<<endl;
        h++;
    }

    return 0;
}
