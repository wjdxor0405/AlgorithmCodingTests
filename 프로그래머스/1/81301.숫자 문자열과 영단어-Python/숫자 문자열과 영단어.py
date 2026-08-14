nums = ['zero', 'one', 'two', 'three', 'four', 'five', 'six', 'seven', 'eight', 'nine']

def solution(s):
    result_str = ''
    while len(s) > 0:
        for i in range(len(nums)):
            if nums[i] == s[:len(nums[i])]:
                result_str += str(i)
                s = s[len(nums[i]):]
                break
        if len(s) > 0:
            if s[0] in ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']:
                result_str += s[0]
                s = s[1:]
        
    return int(result_str)