def solution(myString, pat):
    answer = 0
    p_len = len(pat)
    m_len = len(myString)
    for i in range(m_len - p_len + 1):
        if pat == myString[i:i+p_len]:
            answer += 1

    return answer