def gcd(a, b):
    if b > a:
        b,a = a,b
    while a % b != 0:
        a = a % b
        if b > a:
            b, a = a, b
    return b

def solution(n, m):
    g = gcd(n, m)
    answer = [g, (n//g)*(m//g)*g]
    return answer