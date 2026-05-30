def dfs(graph, node, visited):
    visited.add(node)
    print("Visited:", node)

    for neighbor in graph[node]:
        if neighbor not in visited:
            dfs(graph, neighbor, visited)
