def solution(survey, choices):
    answer = ''
    RT = 0
    CF = 0
    JM = 0
    AN = 0

    for i in range(len(survey)):
        s, c = survey[i], choices[i]
        c = 4 - c
        if s == "RT":
            RT += c
        elif s == "TR":
            RT -= c
        elif s == "CF":
            CF += c
        elif s == "FC":
            CF -= c
        elif s == "JM":
            JM += c
        elif s == "MJ":
            JM -= c
        elif s == "AN":
            AN += c
        elif s == "NA":
            AN -= c

    answer += 'R' if RT >=0 else 'T'
    answer += 'C' if CF >=0 else 'F'
    answer += 'J' if JM >=0 else 'M'
    answer += 'A' if AN >=0 else 'N'

    return answer