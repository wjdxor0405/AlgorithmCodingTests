def solution(n):
    answer = -1
    a = 1
    c = 71000000
    b = c/2

    while c - a > 1:
        if a**2 <= n and n <= b**2:
            c = b
            b = int((a+c)//2)
        else:
            a = b
            b = int((a+c)//2)

    if a**2 == n:
        return (a+1)**2
    elif (a+1)**2 == n:
        return (a+2)**2
    else:
        -1

    return answer