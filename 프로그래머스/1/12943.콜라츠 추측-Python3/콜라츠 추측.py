def solution(num):
    answer = 0
    for i in range(500):
        if num == 1:
            break

        answer += 1

        if num % 2 == 0:
            num //= 2
        else:
            num = 3*num + 1

    if answer == 500:
        return -1

    return answer