import re
# 이전에 틀린 이유 : 3번 --> new_id = re.sub(r'(.)\1+',r'\1',new_id)
# (.)의 .은 정규식에서 "아무 문자"를 의미.

def solution(new_id):
    # 1
    new_id = new_id.lower()
    # 2
    new_id = re.sub(r'[^a-z0-9_.-]','',new_id) 
    # 3
    new_id = re.sub(r'(\.)\1+',r'\1',new_id)
    print(new_id)
    # 4
    if len(new_id)>0:
        new_id = new_id[1:] if new_id[0] == '.' else new_id
    if len(new_id)>0:    
        new_id = new_id[:-1] if new_id[-1] == '.' else new_id
    # 5
    new_id = 'a' if len(new_id) == 0 else new_id
    # 6
    new_id = new_id[:15] #if len(new_id) >= 16 else new_id
    new_id = new_id[:-1] if new_id[-1] == '.' else new_id
    # new_id = new_id if len(new_id) <= 2 else new_id
    # 7
    new_id = new_id + new_id[-1]*(3 - len(new_id))

    return new_id