def small_big(section, m, l):      

    l0 = l
    next_l = l
    big_count = 0

    s0 = section[l]
    big = []

    for i in range(l, len(section) - 1):

        l0 = i + 1
        s = section[l0]
        if s >= s0 + m:
            next_l = l0
            big_count += 1
            break

    if big_count ==0:
        return len(section)
    return next_l


def solution(n, m, section):
    answer = 0
    l = 0
    while len(section) > l:
        l = small_big(section, m, l)
        answer += 1

    return answer