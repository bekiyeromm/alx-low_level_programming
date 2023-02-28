#!/usr/bin/python3
"""5-island_perimeter module"""

def island_perimeter(grid):

    """returns the permiter of island"""

    length = len(grid) - 1
    width = len(grid[0]) - 1
    count = 0
    """print("len of grid-1",length)
    print("len of gid[0]",width)
    """
    for i, r in enumerate(grid):
        for j, n in enumerate(r):
            if n == 1:
                if i == 0 or grid[i - 1][j] != 1:
                    count = count + 1
                if j == 0 or grid[i][j - 1] != 1:
                    count = count + 1
                if j == width or grid[i][j + 1] != 1:
                    count = count + 1
                if i == length or grid[i + 1][j] != 1:
                    count = count + 1
    return  count
