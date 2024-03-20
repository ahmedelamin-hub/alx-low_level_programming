#!/usr/bin/python3
"""
defines function island_perimeter
- 0 represents water
- 1 represents land
connected horizontally/vertically
"""


def island_perimeter(grid):
    """
    Returns the perimeter
    """
    width = len(grid[0])
    height = len(grid)
    perimeter = 0

    for row in range(height):
        for col in range(width):
            if grid[row][col] == 1:

                if row == 0 or grid[row - 1][col] == 0:
                    perimeter += 1

                if row == height - 1 or grid[row + 1][col] == 0:
                    perimeter += 1

                if col == 0 or grid[row][col - 1] == 0:
                    perimeter += 1

                if col == width - 1 or grid[row][col + 1] == 0:
                    perimeter += 1
    return perimeter
