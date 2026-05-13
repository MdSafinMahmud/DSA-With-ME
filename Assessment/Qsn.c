#include <stdio.h>
int queue[10];
int front = -1, rear = -1;
void enqueue(int value)
{
    if (rear == 9)
        return;
    if (front == -1)
        front = 0;
    rear++;
    queue[rear] = value;
}
int dequeue()
{
    int item = queue[front];
    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }
    return item;
}
int main()
{
    int graph[5][5] = {
        {0, 1, 1, 0, 0},
        {1, 0, 0, 1, 1},
        {1, 0, 0, 0, 0},
        {0, 1, 0, 0, 0},
        {0, 1, 0, 0, 0}};
    int visited[5] = {0};
    char nodes[5] = {'P', 'Q', 'R', 'S', 'T'};
    int start = 0;
    enqueue(start);
    visited[start] = 1;
    printf("BFS Traversal: ");
    while (front != -1)
    {
        int current = dequeue();
        printf("%c ", nodes[current]);
        for (int i = 0; i < 5; i++)
        {
            if (graph[current][i] == 1 && visited[i] == 0)
            {
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
    return 0;
}