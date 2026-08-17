def solution(numbers):
    answer = 0
    for n in [1,2,3,4,5,6,7,8,9]:
        if n not in numbers:
            answer += n

    return answer