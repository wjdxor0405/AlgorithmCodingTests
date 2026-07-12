def solution(my_string):
    answer = [0]*52
    for c in my_string:
        n = ord(c)
        if ord('A') <= n and n <= ord('Z'):
            answer[n - ord('A')] += 1
        elif ord('a') <= n and n <= ord('z'):
            answer[n - ord('a') + 26] += 1

    return answer