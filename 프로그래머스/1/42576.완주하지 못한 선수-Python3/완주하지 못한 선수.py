def solution(participant, completion):
    com = dict()
    answer = ""
    for c in completion:
        if c in com:
            com[c] += 1
        else:
            com[c] = 1
    for p in participant:
        if p not in com:
            answer = p
            break
        elif com[p] == 0:
            answer = p
            break
        else:
            com[p] -= 1

    return answer