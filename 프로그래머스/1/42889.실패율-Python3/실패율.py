class Frac:
    def __init__(self, de, nu):
        self.de = de
        self.nu = nu

    def __lt__(self, other):
        return self.de * other.nu  < other.de * self.nu


def solution(N, stages):
    answer = [0]*N
    s = [0]*(N+2)
    for stage in stages:
        s[stage] += 1

    # print(s)
    result = [[0, None] for i in range(N)]
    for i in range(N,0,-1):
        d = s[i]
        s[i] += s[i+1]
        result[i-1] = [i, Frac(s[i], d)]

    result.sort(key=lambda x: (x[1], -x[0]))
    # print(s)
    # print(result)
    for i in range(N):
        answer[i] = result[i][0]
    
    return answer