def solution(nums):
    N = len(nums)//2
    d = dict()
    for n in nums:
        d[n] = 0
    l = len(d)
    if l > N:
        return N
    return l