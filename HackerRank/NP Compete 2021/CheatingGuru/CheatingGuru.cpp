#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    ll Rows,Columns,DummyVar;
    cin>>Rows>>Columns;
    int M[Rows][Columns],MaxCol[Columns],MaxRow[Rows],max;
    for(int i=0;i<Rows;i++)
    {
        for(int j=0;j<Columns;j++)
        {
            cin>>M[i][j];
            if(j==0){max=M[i][j];}
            else if(M[i][j]>max){max=M[i][j];}
        }
        MaxRow[i]=max;
    }
    for(int i=0;i<Columns;i++)
    {
        for(int j=0;j<Rows;j++)
        {
            if(j==0){max=M[j][i];}
            else if(M[j][i]>max){max=M[j][i];}
        }
        MaxCol[i]=max; 
    }
    int Query;
    cin>>Query;
    for(int i=0;i<Query;i++)
    {
        int x,y,Max1,Max2,max;
        cin>>x>>y;
        x--; y--;
        if(MaxRow[x]<MaxCol[y]){cout<<MaxCol[y];}
        else{cout<<MaxRow[x];}
        cout<<endl;
    }\
    return 0;
} 