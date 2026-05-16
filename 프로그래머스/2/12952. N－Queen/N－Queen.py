def check(arr, lst, count):
    n = len(arr)
    row = len(lst)

    if row == n:
        count[0] += 1
        return
    elif arr[row] == [False]*n:
        return

    for i in range(n):
        if arr[row][i]:
            arr_cpy = [arr[i].copy() for i in range(n)]
            for j in range(n):
                arr_cpy[row][j] = False
                arr_cpy[j][i] = False
                if row+j < n and i+j < n:
                    arr_cpy[row+j][i+j] = False
                if 0 <= row-j and 0<= i-j:
                    arr_cpy[row-j][i-j] = False
                if row+j < n and 0<= i-j:
                    arr_cpy[row+j][i-j] = False
                if 0 <= row-j and i+j < n:
                    arr_cpy[row-j][i+j] = False
            lst_cpy = lst.copy()
            lst_cpy.append(i)
            check(arr_cpy, lst_cpy, count)

def solution(n):

    arr = [[True]*n]*n
    lst = []
    count = [0]
    check(arr, lst, count)

    return count[0]