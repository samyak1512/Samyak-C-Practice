test_cases = int(input())

for i in range(test_cases):
    var1 = int(input())
    grid = []
    for i in range(3):
        grid.append(input().split(' '))
    int_grid = []
    for j in grid:
        for k in j:
            int_grid.append(int(k))
    sum1 = int_grid[1] + int_grid[2] + int_grid[5]
    sum2 = int_grid[3] + int_grid[6] + int_grid[7]
    print(max(sum1,sum2))