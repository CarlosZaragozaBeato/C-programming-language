/*
class Solution(object):
    def merge(self, nums1, m, nums2, n):
        """
        :type nums1: List[int]
        :type m: int
        :type nums2: List[int]
        :type n: int
        :rtype: None Do not return anything, modify nums1 in-place instead.
        """
        lon = len(nums1) - 1 
        m -= 1
        n -= 1

        while m>=0 and n >=0:
            if nums1[m] > nums2[n]:
                nums1[lon] = nums1[m]
                m -= 1
            else:
                nums1[lon] = nums2[n]
                n -= 1
            
            lon -= 1
        
        if n >=0:
            nums1[:n+1] = nums2[:n+1]
*/

/*
class Solution(object):
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        n = len(nums) -1 


        while n >= 0:
            if nums[n] == val:
                del nums[n]
            
            n -= 1 
        
        
        return len(nums)
*/

int main (){



    return 0 ;
}




void exercise_01(){

}

void exercise_02(){
    
}