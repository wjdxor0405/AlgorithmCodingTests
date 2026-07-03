def solution(n, lost, reserve):
    answer = 0
    counts = [1]*(n+2)
    counts[0] = 0
    counts[n+1] = 0
    
    for l in lost:
        counts[l] = 0
    for r in reserve:
        counts[r] += 1
    
    for i in range(1, len(counts)-1):
        if counts[i] >0:
            answer += 1
        elif counts[i-1] == 2:
            answer += 1
        elif counts[i+1] == 2:
            answer += 1
            counts[i+1] = 1

    return answer
