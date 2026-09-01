def solution(babbling):
    answer = 0
    for b in babbling:

        check = True
        pre = ""
        while len(b) > 0:
            if b[:3] == "aya" and pre != "aya":
                b = b[3:]
                pre = "aya"
            elif b[:2] == "ye" and pre != "ye":
                b = b[2:]
                pre = "ye"
            elif b[:3] == "woo" and pre != "woo":
                b = b[3:]
                pre = "woo"
            elif b[:2] == "ma" and pre != "ma":
                b = b[2:]
                pre = "ma"
            else:
                b = ""
                check = False
        if check:
            answer += 1

    return answer
