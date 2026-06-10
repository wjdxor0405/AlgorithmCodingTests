def solution(x):
    Y = str(x)
    sum = 0
    for c in Y:
        sum += int(c)
    print(sum)
    if x % sum == 0:
        return True
    else:
        return False
