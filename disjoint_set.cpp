#include <iostream>

using namespace std;
int a[1000000];
int find(int r)
{
    if(a[r]==r)return r;
    
    int root=find(a[r]);
    a[r]=root;
    return root;
}
void union_(int x,int y)
{
    int r_x=find(x);
    int r_y=find(y);
    a[r_x]=r_y;
}
int main()
{
    
    int n,m,i,k,x,y,count;
    while(cin>>n>>m)
    {
        for(i=0;i<n;i++)a[i]=i;
        count=0;
        while(m--)
        {
            cin>>x>>y;
            //union(x,y);
        }
        for(i=0;i<n;i++)
        {
            if(find(0)==find(i))count++;
        }
        cout<<count<<endl;
        
    }

    return 0;
}
