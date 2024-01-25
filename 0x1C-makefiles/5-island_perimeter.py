#!/usr/bin/python3
"""Island perimeter function"""


def island_perimeter(grid):
    """Return the perimeter of the island described in grid
    Args:
        grid (list): A list of list of integers.
    Returns:
        perimeter of the island.
    """
    w = len(grid[0])
    h = len(grid)
    edge = 0
    size = 0

    for i in range(h):
        for j in range(w):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edge += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edge += 1
    return size * 4 - edge * 2
