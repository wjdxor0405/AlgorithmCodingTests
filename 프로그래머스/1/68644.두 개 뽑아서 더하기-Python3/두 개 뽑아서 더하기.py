def solution(numbers):
    a = [False for i in range(201)]
    n = len(numbers)
    for i in range(n):
        for j in range(i+1,n):
            a[numbers[i]+numbers[j]] = True

    answer = []

    for i in range(201):
        if a[i] == True:
            answer.append(i)

    return answer
