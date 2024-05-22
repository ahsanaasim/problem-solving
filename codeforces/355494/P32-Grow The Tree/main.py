# https://codeforces.com/group/yg7WhsFsAp/contest/355494/problem/P32

def grow_the_tree(sticks):
    sticks.sort(reverse=True)
    
    mid_point = (len(sticks) + 1) // 2  # Integer division rounded up
    sum_x = sum(sticks[:mid_point])  # Sum of larger half for x-axis
    sum_y = sum(sticks[mid_point:])  # Sum of smaller half for y-axis
    
    distance_squared = sum_x**2 + sum_y**2
    return distance_squared


n = int(input())
sticks = list(map(int, input().split()))
# sticks = [1, 1, 2, 2]
result = grow_the_tree(sticks)
print(result)
