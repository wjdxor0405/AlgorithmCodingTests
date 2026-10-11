def pos_to_num(pos):
    pos_nums = pos.split(':') 
    pos_num = int(pos_nums[0])*60 + int(pos_nums[1])
    return pos_num

def fun(s):
    if s < 10:
        return f'0{s}'
    else:
        return f'{s}'

def solution(video_len, pos, op_start, op_end, commands):
    answer = ''
   
    pos_n = pos_to_num(pos)
    op_s = pos_to_num(op_start)
    op_e = pos_to_num(op_end)
    vid_l = pos_to_num(video_len)

    for c in commands:

        if op_s <= pos_n and pos_n <= op_e:
            pos_n = op_e
        
        if c == 'next':
            pos_n += 10
        elif c == 'prev':
            pos_n -= 10
        
        
        if op_s <= pos_n and pos_n <= op_e:
            pos_n = op_e
        elif pos_n <= 0:
            pos_n = 0
        elif pos_n >= vid_l:
            pos_n = vid_l
    
    return f'{fun(pos_n // 60)}:{fun(pos_n % 60)}'