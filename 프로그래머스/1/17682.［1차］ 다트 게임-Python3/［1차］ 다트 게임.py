def solution(dartResult):
    scores = []
    bonus = []
    options = []
    idx = 0
    num = 0
    i = 0
    op = 1
    bo = 1
    cal = False
    for i in range(len(dartResult)):
        s = dartResult[i]
        if s.isdigit():
            num *= 10
            num += int(s)
        elif s.isalpha():
            if s == 'S':
                bo = 1
            elif s == 'D':
                bo = 2
            elif s == 'T':
                bo = 3

            if i == len(dartResult) - 1:
                cal = True
            elif dartResult[i+1].isdigit():
                cal = True
        else:
            cal = True
            if s == '*':
                op = 2
                if idx > 0:
                    options[idx - 1] *= 2
            elif s == '#':
                op = -1

        if cal:
            scores.append(num)
            bonus.append(bo)
            options.append(op)
            idx += 1 
            op = 1
            bo = 1
            num = 0
            cal = False

    answer = 0

    for i in range(idx):
        answer += (scores[i]**bonus[i])*options[i]

    return answer