def solution(s):
    answer = []
    a = [-1 for i in range(26)]
    for i in range(len(s)):
        n = ord(s[i]) - 97

        if a[n] < 0:
            answer.append(-1)
            a[n] = i
        else:
            answer.append(i - a[n])
            a[n] = i
    
    return answer