def solution(n, words):
    answer = []
    i = 0
    prev = words[0][0]
    for w in words:
        if w[0] != prev:
            break
        elif len(w) <2:
            break
        elif w in words[:i]:
            break
        prev = w[-1]
        i += 1
    if i == len(words):
        return [0, 0]
    answer = [i % n + 1, i // n + 1]

    return answer