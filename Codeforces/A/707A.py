n = int(input().split()[0])
pixels = []
for i in range(n):
    pixels.extend(list(input().split()))
if 'C' in pixels or 'M' in pixels or 'Y' in pixels:
    print('#Color')
else:
    print("#Black&White")