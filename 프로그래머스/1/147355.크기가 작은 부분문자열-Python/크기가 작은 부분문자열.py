def solution(t, p):
    answer = 0
    for i in range(len(t)):
        s = t[i:i+len(p)]
        if len(s) == len(p):
            if int(s) <= int(p):
                answer += 1
            
    return answer