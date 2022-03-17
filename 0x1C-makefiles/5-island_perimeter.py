#!/usr/bin/python3
"""
module that count the perimeter of the island described in grid

Functions:
    island_perimeter(grid): function that returns the perimeter
        of the island described in grid
"""


def island_perimeter(grid):
    """
    function that returns the perimeter of the island described in grid

    Arguments:
        grid (matrix): map of the island

    Returns:
        perimeter of the island
    """
    perimeter = 0
    for y in range(len(grid)):
        for x in range(len(grid[0])):
            if grid[y][x] == 1:
                perimeter += count_perimeter(grid, y, x)
    return perimeter


def count_perimeter(grid, y, x):
    """
    function that count the perimeter of a case

    Arguments:
        grid (matrix): map where we count the perimeter
        y (int): position y in grid
        x (int): position x in map

    Returns:
        the perimeter of the case
    """
    count = 0
    if y - 1 < 0 or grid[y - 1][x] == 0:
        count += 1
    if y + 1 >= len(grid) or grid[y + 1][x] == 0:
        count += 1
    if x - 1 < 0 or grid[y][x - 1] == 0:
        count += 1
    if x + 1 >= len(grid[0]) or grid[y][x + 1] == 0:
        count += 1
    return count
