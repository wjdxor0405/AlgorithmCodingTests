str = input()
result = ''

for s in str:
    if ord('a') <= ord(s) and ord(s) <= ord('z'):
        result += s.upper()
    else:
        result += s.lower()

print(result)