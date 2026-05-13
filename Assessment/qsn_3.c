    #include <stdio.h>
    int graph[5][5] = {
        {0, 1, 1, 0, 0},
        {1, 0, 0, 1, 1},
        {1, 0, 0, 0, 0},
        {0, 1, 0, 0, 0},
        {0, 1, 0, 0, 0}};
    int visited[5] = {0};
    char nodes[5] = {'P', 'Q', 'R', 'S', 'T'};
    void dfs(int node)
    {
        visited[node] = 1;
        printf("%c ", nodes[node]);
        for (int i = 0; i < 5; i++)
        {
            if (graph[node][i] == 1 && visited[i] == 0)
            {
                dfs(i);
            }
        }
    }
    int main()
    {
        printf("DFS Traversal: ");
        dfs(0);
        return 0;
    }