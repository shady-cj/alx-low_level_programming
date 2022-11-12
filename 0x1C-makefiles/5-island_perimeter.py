#!/usr/bin/python3

"""
This module returns the perimeter of the island described in grid
"""

def island_perimeter(grid):
    """
    Calculating the perimeter of an island
    """
    
    sides = 0
    nodes = []
    visited = set([])
    for i in range(len(grid)):
        if len(nodes) > 0:
            break
        for  j in range(len(grid[i])):
            if grid[i][j] == 1:
                nodes.append((i,j))

    while len(nodes) > 0:
        currentNode = nodes.pop(0)
        if visited.__contains__(currentNode):
            continue
        visited.add(currentNode)
        sides += 1
        i, j = currentNode
        i += 1
        if i >= len(grid) or grid[i][j] == 0:
            continue
        k = j
        while k >= 0 and grid[i][k] == 1:
            nodes.append((i, k))
            k -= 1
        k = j
        while k < len(grid[i]) and grid[i][k] == 1:
            nodes.append((i, k))
            k += 1
    return sides * 2
