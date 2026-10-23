# 이전 틀린 풀이의 반례 - "ab ab cd", [[0,4]]

def solution(message, spoiler_ranges):
    masked_message = [m for m in message]
    
    for a, b in spoiler_ranges:
        for i in range(a,b+1):
            # 샵으로 문자 가리기. 띄어쓰기는 보존.
            masked_message[i] = ' ' if message[i] == ' ' else '#'

    important_words = []

    for a, b in spoiler_ranges:

        # 가린거 풀기 전 단어들.
        masked_words = ''.join(masked_message).split()

        # 가린거 풀기
        for i in range(a,b+1):
            masked_message[i] = message[i]
    
        # 가린거 풀린 단어들.
        words = ''.join(masked_message).split()

        for i in range(len(words)):
            
            # 방금 방지 해제된 단어 if 조건
            if '#' in masked_words[i] and '#' not in words[i]:
                important = True
                for j in range(len(words)):
                    # 같은 단어 등장 시 중요 단어 아님.
                    if i != j and words[i] == words[j]:
                        
                        # 방금 해제된 단어에 같은 단어 2번 등장 가능함. 예외 처리(이거 때문에 틀림.)
                        if '#' in masked_words[j] and '#' not in words[j]:
                            pass
                        else:
                            important = False
                            break

                # 중요단어고 중요단어 리스트에 없으면 추가
                if important and words[i] not in important_words:
                    important_words.append(words[i])
                        

    return len(important_words)
