#include<iostream>
#include<stdio.h>
using namespace std;
#define INFINITY 9999
#define max 5
void dijkstra(int G[max][max],int n,int startnode);

void dijkstra(int G[max][max],int n,int startnode) {
   int cost[max][max],distance[max],pred[max];
   int visited[max],count,mindistance,nextnode,i,j;
   for(i=0;i<n;i++)
      for(j=0;j<n;j++)
   if(G[i][j]==0)
      cost[i][j]=INFINITY;
   else
      cost[i][j]=G[i][j];
   for(i=0;i<n;i++) {
      distance[i]=cost[startnode][i];
      pred[i]=startnode;
      visited[i]=0;
   }
   distance[startnode]=0;
   visited[startnode]=1;
   count=1;
   while(count<n-1) {
      mindistance=INFINITY;
      for(i=0;i<n;i++)
         if(distance[i]<mindistance&&!visited[i]) {
         mindistance=distance[i];
         nextnode=i;
      }
      visited[nextnode]=1;
      for(i=0;i<n;i++)
         if(!visited[i])
      if(mindistance+cost[nextnode][i]<distance[i]) {
         distance[i]=mindistance+cost[nextnode][i];
         pred[i]=nextnode;
      }
      count++;
   }
   for(i=0;i<n;i++)
   if(i!=startnode) {
      cout<<"\nDistance of node"<<i<<"="<<distance[i];
      cout<<"\nPath="<<i;
      j=i;
      do {
         j=pred[j];
         cout<<"<-"<<j;
      }while(j!=startnode);
   }
}

int main() {
  int G[max][max],n,u,v;
  cout<<"Enter the number of vertices"<<endl;
  cin>>v;
  cout<<"Enter elements into the matrix"<<endl;
  for(int i=0;i<v;i++)
  {
  for(int j=0;j<v;j++)
  {
  cin>>G[i][j];
  }
  }
  cout<<"Enter the source vertex"<<endl;
  cin>>u;
  cout<<"Enter the destination vertex"<<endl;
  cin>>n;
   dijkstra(G,n,u);
   return 0;
}
