def solution(a, d, included):
    answer = 0
    for inc in included:
        if inc:
            answer += a
        a += d
    return answer