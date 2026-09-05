# 시간 초과떠서 약간 바꿈.

def solution(number, limit, power):
    answer = 0
    att = [0] * (number+1)
    
    for n in range(1,number+1):
        for i in range(n, number + 1,n):
            if att[i] <= limit:
                att[i] += 1
            
    for n in range(1,number+1):
        if att[n] > limit:
            answer += power
        else:
            answer += att[n]
            
    return answer