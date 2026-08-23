def solution(n):
    answer = 0
    if n % 2 == 0:
        answer = (n*(n+1)//2)*(n+2)//3 #(n)(n+2)(n+1)/6
    else:
        answer = ((n+1)//2)**2
        
    return answer