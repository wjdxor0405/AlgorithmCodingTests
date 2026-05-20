def solution(a, b):

    d = ("SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT")
    offset = (4, 0, 1, 4, 6, 2, 4, 0, 3, 5, 1, 3)

    return d[(b + offset[a-1]) % 7]