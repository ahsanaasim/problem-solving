# https://codeforces.com/group/yg7WhsFsAp/contest/355494/problem/P33
def is_sorted(arr):
    return all(arr[i] <= arr[i + 1] for i in range(len(arr) - 1))

def thanos_sort(arr):
    if is_sorted(arr):
        return len(arr)
    mid = len(arr) // 2
    return max(thanos_sort(arr[:mid]), thanos_sort(arr[mid:]))

n = int(input())
array = list(map(int, input().split()))

result = thanos_sort(array)
print(result)