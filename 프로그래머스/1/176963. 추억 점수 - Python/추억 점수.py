def solution(name, yearning, photo):
    answer = []

    d = dict()
    for i in range(len(name)):
        d[name[i]] = yearning[i]

    for ph in photo:
        a = 0
        for p in ph:
            if p in d:
                a += d[p]
        answer.append(a)

        
    return answer