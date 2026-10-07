def solution(friends, gifts):

    array = [[0 for i in range(len(friends))] for j in range(len(friends))]
    f_i = dict()
    for i in range(len(friends)):
        f_i[friends[i]] = i

    c = [0 for i in range(len(friends))]

    for gift_str in gifts:
        a, b = gift_str.split(' ')
        array[f_i[a]][f_i[b]] += 1
        c[f_i[a]] += 1
        c[f_i[b]] -= 1

    t = [0 for i in range(len(friends))]

    for i in range(len(friends)):
        for j in range(i+1,len(friends)):
            if i != j:
                if array[i][j] > array[j][i]:
                    t[i] += 1
                elif array[i][j] < array[j][i]:
                    t[j] += 1
                elif c[i] > c[j]:
                    t[i] += 1
                elif c[i] < c[j]:
                    t[j] += 1

    return max(t)