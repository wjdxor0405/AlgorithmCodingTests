def solution(num_list):
    odd = 0
    even = 0
    for num in num_list:
        if num % 2 == 0:
            even *= 10
            even += num
        else:
            odd *= 10
            odd += num
    
    return even + odd