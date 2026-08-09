def solution(num_list):
    answer = 0
    prod = 1
    for n in num_list:
        prod *= n
    if prod < sum(num_list)**2:
        answer = 1
    
    return answer