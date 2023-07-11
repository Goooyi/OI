cases = int(input())

for _ in range(cases):
    n = int(input())
    nums = list(map(int, input().split()))

    if nums[-1] == 1:
        print("NO")
    else:
        # divide nums to sections
        res = []
        sec = []
        i = 0
        last = 0
        while i < n:
            if nums[i] == 0:
                sec.append([last,i])
                last = i+1
            i+=1

        for item in reversed(sec):
            res.extend([0]*(item[1] - item[0]))
            res.append(item[1]-item[0])

        print("YES")
        print(" ".join(map(str,res)))