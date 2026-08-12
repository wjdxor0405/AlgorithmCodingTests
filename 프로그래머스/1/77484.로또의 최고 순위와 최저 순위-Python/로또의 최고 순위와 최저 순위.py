def solution(lottos, win_nums):
    already = 0
    zeros = 0
    for lo in lottos:
        if lo in win_nums:
            already += 1
        if 0 == lo:
            zeros += 1

    b = 7 - already if already > 1 else 6
    a = 7 - already - zeros if already + zeros > 1 else 6
    
    return [a,b]