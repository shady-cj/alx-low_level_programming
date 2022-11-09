#!/usr/bin/python3

"""
This module returns the perimeter of the island described in grid
"""

def island_perimeter(grid):
    """
    Calculating the perimeter of an island
    """
    
    sides = 0
    
    for i in range(len(grid)):
        for  j in range(len(grid[i])):
            if grid[i][j] == 1:
                if grid[i][j+1] == 1:
                    
                sides += 1
