def solution(numLog):
    answer = ''
    arr = [numLog[i+1] - numLog[i] for i in range(len(numLog)-1)]
    for a in arr:
        if a == 1:
            answer += 'w'
        elif a == -1:
            answer += 's'
        elif a == -10:
            answer += 'a'
        elif a == 10:
            answer += 'd'
            
    return answer