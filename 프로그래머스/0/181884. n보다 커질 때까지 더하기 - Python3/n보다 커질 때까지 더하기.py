def solution(numbers, n):
    answer = 0
    for num in numbers:
        answer += num
        if n < answer:
            break
    return answer