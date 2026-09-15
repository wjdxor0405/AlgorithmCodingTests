def solution(keymap, targets):
    answer = []
    a = [200 for i in range(26)]
    for k in keymap:
        for i in range(len(k)):
            idx = ord(k[i]) - 65
            if a[idx] > i+1:
                a[idx] = i+1

    for t in targets:
        count = 0
        for i in range(len(t)):
            idx = ord(t[i]) - 65
            if a[idx] > 100:
                count = -1
                break
            else:
                count += a[idx]
        answer.append(count)


    return answer
