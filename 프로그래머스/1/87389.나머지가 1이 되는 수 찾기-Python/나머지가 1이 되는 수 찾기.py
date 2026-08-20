def solution(n):
    m = n-1
    answer = 0
    for i in range(2, 1001):
        if m % i == 0:
            answer = i
            break
    if answer == 0:
        return m

    return answer