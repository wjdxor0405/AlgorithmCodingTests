def solution(n):
    m = list(str(n))
    m.sort(reverse=True)
    answer = "".join(m)
    return int(answer)
    