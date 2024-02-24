#!/usr/bin/python3
'''A function that returns the perimeter of the island 
described in grid
'''


def num_water_zones(grid, i, j):
    '''The number of water zones'''

    num = 0

    if i <= 0 or not grid[i - 1][j]:
        num += 1
    if j <= 0 or not grid[i][j - 1]:
        num += 1
    if j >= len(grid[i]) - 1 or not grid[i][j + 1]:
        num += 1
    if i >= len(grid) - 1 or not grid[i + 1][j]:
        num += 1

    return num


def island_perimeter(grid):
    '''The perimeter is returned'''

    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                perimeter += num_water_zones(grid, i, j)

    return perimeter

