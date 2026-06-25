def solution(n, arr1, arr2):
    answer = []

    for i in range(n):
        a_num = arr1[i] | arr2[i]
        bit_array = [bool(int(bit)) for bit in bin(a_num)[2:]]
        array = ['#' if b else ' ' for b in bit_array]
        z = n - len(array)
        answer.append((' '*z) + ''.join(array))

    return answer