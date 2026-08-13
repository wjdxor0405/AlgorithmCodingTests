def solution(left, right):
    answer = 0
    l, r = 0, 1
    for i in range(32):
        if i **2 >= left:
            l = i
            break
    for i in range(32):
        if i**2 <= right:
            r = i

    answer = (right - left + 1)* (right+ left)//2
    for i in range(l,r+1):
        answer -= 2*i**2

    return answer