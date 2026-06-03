def solution(s, n):
    answer = ''
    l = 'abcdefghijklmnopqrstuvwxyz'
    u = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    for c in s:
        if c == ' ':
            answer += c
        else:
            l_i = l.find(c)
            if l_i >=0:
                answer += l[(l_i + n)%26]
            else:
                answer += u[(u.find(c) + n)%26]
    return answer