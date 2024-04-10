#!/usr/bin/python3

"""Module that returns the perimeter of an island."""



def island_perimeter(grid):
    """
    Modules returns perimeter of island.

    perimeter: grid.
        0 represents a water zone.
        1 represents a land zone.
        One cell is a square with side length 1.
        Grid cells are connected horizontally/vertically (not diagonally).
        Grid is rectangular, width and height don’t exceed 100.
    """
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                perimeter += 4

                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 1
                if i < len(grid) - 1 and grid[1 - 1][j] == 1:
                    perimeter -= 1
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 1
                if j < len(grid[0]) - 1 and grid[i][j + 1] == 1:
                    perimeter -= 1
    return perimeter

