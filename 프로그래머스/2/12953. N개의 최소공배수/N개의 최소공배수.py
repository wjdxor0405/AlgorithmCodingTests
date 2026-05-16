def gcd(a, b):
    if a < b:
        a, b = b, a
    r = a % b
    if r == 0:
        return b
    return gcd(b, r)


def solution(arr):
    answer = arr[0]
    for i in range(1, len(arr)):
        g = gcd(arr[i], answer)
        answer = answer*arr[i]//g

    return answer