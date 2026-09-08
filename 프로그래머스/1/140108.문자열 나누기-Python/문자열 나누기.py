def solution(s):
    answer = 0

    count_1 = 0
    count_2 = 0
    p = ''
    q = True

    for i in range(len(s)):
        c = s[i]

        if i == len(s) - 1:
            answer += 1
            break

        if q:
            p = c
            q = False
            count_1 += 1
        else:
            if p == c:
                count_1 += 1
            else:
                count_2 += 1
    
            if count_1 == count_2:
                q = True
                answer += 1

    return answer