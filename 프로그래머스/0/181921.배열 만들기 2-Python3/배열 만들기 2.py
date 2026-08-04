def solution(l, r):
    arr = [int(str(bin(i))[2:].replace('1','5')) for i in range(1,64)]
    answer = [a for a in filter(lambda x :l <= x and x <=r, arr)]
    
    return answer if len(answer) > 0 else [-1]