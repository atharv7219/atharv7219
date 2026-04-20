#include <stdio.h>
#include <limits.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int graph[n+1][n+1];

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            graph[i][j] = 0;

    for(int i = 0; i < m; i++)
    {
        int u, v, w;
        scanf("%d %d %d", &u, &v, &w);
        graph[u][v] = w;
        graph[v][u] = w;
    }

    int source;
    scanf("%d", &source);

    int dist[n+1];
    int visited[n+1];

    for(int i = 1; i <= n; i++)
    {
        dist[i] = INT_MAX;
        visited[i] = 0;
    }

    dist[source] = 0;

    for(int count = 1; count <= n; count++)
    {
        int min = INT_MAX, u = -1;

        for(int i = 1; i <= n; i++)
        {
            if(!visited[i] && dist[i] < min)
            {
                min = dist[i];
                u = i;
            }
        }

        if(u == -1)
            break;

        visited[u] = 1;

        for(int v = 1; v <= n; v++)
        {
            if(graph[u][v] && !visited[v] &&
               dist[u] + graph[u][v] < dist[v])
            {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    for(int i = 1; i <= n; i++)
        printf("%d ", dist[i]);

    return 0;
}
