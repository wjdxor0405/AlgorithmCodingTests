def solution(n):
    primes = []
    for i in range(2,n+1):
        pr = True
        for p in primes:
            if p>1000:
                break
            elif i % p == 0:
                pr = False
                break
        if pr:
            primes.append(i)    

    answer = len(primes)
    return answer