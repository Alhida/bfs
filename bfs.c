#include<stdio.h>
#define MAX 20
int adj[MAX][MAX];
int visited[MAX]
int queue[MAX]
int front=-1,rear=-1;
void enqueue(int vertex)
{
if(rear==MAX-1)
return;
if(front==-1)
front=0;
queue[++rear]=vertex;
}
int dequeue
{
int vertex=queue[front++]
if (front>rear)
{
front=rear=-1;
}
return vertex;
}
void BFS(int start,int n)
{
int i,current;
for(i=0;i<n;i++)
visited[i]=1;
front=rear=-1;
visited[start]=1;
enqueue(start);
print("BFS traversal");
while(front!=-1)
{
current=dequeue();
printf("%d",current);
for(i=0;i,n;i++)
{
if(adj[current][i]==1&&visited[i]==0)
{
visited[i]=1;
enqueue(i);
}}}
printf("\n");
int main()
{
int n,i,j,start;
printf("Enter number of vertices:");
scanf("%d",&n);
if(n==0||n>MAX)
{
printf("Invalid no of vertices\n");
return 0;
}
printf("Enter adjacency matrix\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&adj[i][j]);
}}
printf("Enter starting vertex(0 to %d):",n-1);
scanf("%d",&start);
if(start<0||start>=n)
{
printf("Invalid starting vertex\n")
return 0;
}
BFS(start,n);
return 0;
}
 


