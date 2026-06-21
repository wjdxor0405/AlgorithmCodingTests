def is_prime(n):
    result = True
    for i in range(2,(n+1)//2 + 1):
        if n % i == 0:
            result = False
            break    
    return result

def solution(nums):
    answer = 0 
    for i in range(len(nums)):
        for j in range(i+1, len(nums)):
            for k in range(j+1, len(nums)):
                if is_prime(nums[i] + nums[j] + nums[k]):
                    print(nums[i],nums[j],nums[k])
                    answer += 1

    return answer