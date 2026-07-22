def solution(intStrs, k, s, l):
    answer = []
    for intstr in intStrs:
        n = int(intstr[s:s+l])
        if n > k:
            answer.append(n)
    return answer