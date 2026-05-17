def solution(s):
    answer = -1
    l = len(s)
    stack = ['_']*l
    stack[0] = s[0]
    p = 0
    for i in range(1,l):
        # print(p, stack, s[i])
        if p >= 0:
            if stack[p] == s[i]:
                p -= 1
            else:
                p += 1
                stack[p] = s[i]
        else:
            p = 0
            stack[0] = s[i]

    if p == -1:
        return 1
    else:
        return 0