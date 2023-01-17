#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > ques1(int row,int col)
{
    int r,c;
    vector<vector<int> > lt(row,vector<int> (col,0));
    for(r=0;r<row;r++)
    {
        for(c=0;c<col;c++)
        {
            lt[r][c]=(rand())%100;
        }
    }
    return lt;
}

vector<vector<int> > ques2(vector<vector<int> > &lt)
{
    int row,col,r,c;
    row=lt.size();
    col=lt[0].size();
    vector<int> l(row,0);
    vector<vector<int> > reslt(row,vector<int> (col,0));
    for(c=0;c<col;c++)
    {
        for(r=0;r<row;r++)
        {
            l[r]=lt[r][c];
        }
        sort(l.begin(),l.end());
        for(r=0;r<row;r++)
        reslt[r][c]=l[r];
    }
    return reslt;
}

int main()
{
    int r,c,row,col;
    cin>>row>>col;
    vector<vector<int> > lt(row,vector<int> (col,0));
    lt=ques1(row,col);
    lt=ques2(lt);
    for(r=0;r<row;r++)
    {
        for(c=0;c<col;c++)
        {
            cout<<lt[r][c]<<"  ";
            cout<<"\n";
        }
    }
    return 0;
}