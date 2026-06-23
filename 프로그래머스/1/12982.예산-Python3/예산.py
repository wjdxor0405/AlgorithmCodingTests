def solution(d, budget):
    answer = 0
    d.sort()
    for d_element in d:
        if budget >= d_element:
            budget -= d_element
            answer += 1
        else:
            break 

    return answer