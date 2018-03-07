#include<iostream>
int main()
{
    int graph[6][6]={{0,0,1,1,0,0},
                    {0,0,0,1,1,0},
                    {0,0,0,1,0,1},
                    {0,0,0,0,0,1},
                    {0,0,0,0,0,1},
                    {0,0,0,0,0,0}};
    int stack1,top=-1,i,j,colsum[6],visited[6];
    memset(visited,0,6*sizeof(visited[0]));
    for(i=0;i<6;i++)
    {
        colsum[i]=0;
        for(j=0;j<6;j++)
        {
            colsum[i]=colsum[i]+graph[i][j];
        }
    }
    for(i=0;i<6;i++)
    {
        if(visited[i]!=1)
        {
        if(colsum[i]==0)
            stack1[++top]=i;
        }
    }
    if(top!=-1)
    {
      a=stack1[top--];
      cout<<a;
      visited[a]=1;
      for(i=0;i<6;i++)
      {
          if(graph[a][i]==1)
            colsum[i]--;
      }
    }
    return (0);
}
