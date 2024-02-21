#!/usr/bin/python3
"""Python Interpreter."""


def island_perimeter(grid):
    """Returns the prerimeter of the island described."""
    width = len(grid[0])
    height = len(grid)
    island_edges = 0
    size_of_island = 0

    for idx in range(height):
        for i in range(width):
            if grid[idx][i] == 1:
                size_of_island += 1
                if (i > 0 and grid[idx][i - 1] == 1):
                    island_edges += 1
                if (idx > 0 and grid[idx - 1][i] == 1):
                    island_edges += 1

    return size_of_island * 4 - island_edges * 2
