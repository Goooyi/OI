import sys 
a = []
for line in sys.stdin:
    a += line.split(",")
nums = []
for x in a:
    if x.strip().isdigit():
        nums.append(int(x.strip()))

n = len(nums)
def greedy(start,nums):
    if start+1 > len(nums):
        return 0
    if start+nums[start] + 1 >= len(nums):
        return 1
    m = -1
    newStart = start
    while True:
        for i,num in enumerate(nums[start+1:start+nums[start]+1]):
            if num + i >= m:
                m = num+i
                newStart = i + start + 1
        start = newStart
        if start+1 > len(nums):
            
    return greedy(newStart,nums) + 1
        
print(greedy(0,nums))