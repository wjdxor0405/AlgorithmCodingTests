def solution(a, b):
    if a > b:
        a, b = b, a
    answer = (b-a+1)*(b+a)//2
    return answer