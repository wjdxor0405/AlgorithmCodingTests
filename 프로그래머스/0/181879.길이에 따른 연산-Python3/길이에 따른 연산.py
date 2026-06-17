def solution(num_list):

    if len(num_list) <= 10:
        answer = 1
        for n in num_list:
            answer *=n
        return answer
    return sum(num_list)