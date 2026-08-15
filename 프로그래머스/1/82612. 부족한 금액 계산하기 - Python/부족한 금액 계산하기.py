def solution(price, money, count):
    
    c = price*count*(count+1)//2
    if c > money:
        return c - money

    return 0