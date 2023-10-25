#!/usr/bin/python3
"""Calculate the perimeter of an island"""


def island_perimeter(grid):
    """
    the function that calculates the perimeter of an island
    """
    perimeter = 0
    prev_perim = 0
    if type(grid) is not list:
        return (0)
    for row in grid:
        pre_perim = perimeter
        for element in row:
            if element == 1:
                perimeter += 1
        if prev_perim != perimeter:
            perimeter += 2
            prev_perim = perimeter
    if perimeter != 0:
        perimeter += 1
    return (perimeter)


if __name__ == "__main__":
    grid = [
            [0, 1, 0, 0, 0, 0],
            [0, 1, 0, 0, 0, 0],
            [0, 1, 0, 0, 0, 0],
            [0, 1, 1, 1, 0, 0],
            [0, 0, 0, 0, 0, 0]
            ]
    print(island_perimeter(grid))
