def searchInsert(nums, target):
    n=len(nums)
    if (target in nums):
        return nums.index(target)
    elif(len(nums)==0):
        return 0
    elif(target>nums[n-1]):
        return n
    else:
        for i in range(0,len(nums)):
            if(target<nums[i]):
                return i
             
a=[1,2,3,5]
target=6
print(searchInsert(a,target))
    