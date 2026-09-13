
def solution(s, skip, index):
    answer = ''
    not_skip = [True for i in range(26)]
    for skip_char in skip:
        not_skip[ord(skip_char) - 97] = False

    for c in s:
        count = 0
        C_i = ord(c) - 97
        while count < index:
            C_i = (C_i + 1) % 26
            if not_skip[C_i]:
                count += 1

        answer += chr(C_i + 97)
            
        
    return answer