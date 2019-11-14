#include <bits/stdc++.h> 
using namespace std; 
#define V 5  
#define INF 999
  
 
void printSolution(int dist[][V]);  
 
void floydWarshall (int graph[][V])  
{  
    
    int dist[V][V], i, j, k;  
  
    
    for (i = 0; i < V; i++)  
        for (j = 0; j < V; j++)  
            dist[i][j] = graph[i][j];  
  
    
    for (k = 0; k < V; k++)  
    {  
        for (i = 0; i < V; i++)  
        {  
            for (j = 0; j < V; j++)  
            {  
                if (dist[i][k] + dist[k][j] < dist[i][j])  
                    dist[i][j] = dist[i][k] + dist[k][j];  
            }  
        }  
    }
    printSolution(dist);  
}  
  

void printSolution(int dist[][V])  
{  
    cout<<"The following matrix shows the shortest distances"
            " between every pair of vertices \n";  
    for (int i = 0; i < V; i++)  
    {  
        for (int j = 0; j < V; j++)  
        {  
            if (dist[i][j] == INF)  
                cout<<"INF"<<"     ";  
            else
                cout<<dist[i][j]<<"     ";  
        }  
        cout<<endl;  
    }  
}  
   
int main()  
{  int graph[V][V],v;
   cout<<"Enter the vertices of the matrix"<<endl;
   cin>>v;
   cout<<"Enter the elements into the matrix"<<endl;
   for(int i=0;i<v;i++)
{
   for(int j=0;j<v;j++)
  {
    cin>> graph[i][j];
 }
}    
    floydWarshall(graph);  
    return 0;  
}  




