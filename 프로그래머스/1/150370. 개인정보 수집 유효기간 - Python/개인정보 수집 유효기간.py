def func(date):
    y, m, d = date.split('.')
    return 28*(12*int(y) + int(m)) + int(d)


def solution(today, terms, privacies):
    answer = []
    t = [0]*26

    TODAY_0 = func(today)

    for term in terms:
        A, N= term.split(' ')
        t[ord(A) - 65] = 28*int(N)

    for i in range(len(privacies)):
        date, A = privacies[i].split(' ')
        if TODAY_0 >= func(date)+ t[ord(A) - 65]:
            answer.append(i+1)


    return answer