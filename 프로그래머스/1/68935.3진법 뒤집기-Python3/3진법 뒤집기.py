def solution(n):
    m = 0
    while n>0:
        m *= 3
        m += n % 3
        n //= 3

    return m
