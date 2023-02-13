import numpy as np
class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        n=[]
        n1=[]
        n2=[]
        for i in nums:
            if(i>0):
                n.append(i)
            elif i<0:
                n1.append(i)
            else:
                n2.append((i))
        l=[]
        for i in range(len(n)):
            for j in range(len(n1)):
                for k in range(len(n2)):
                    if(1):
                        if(n1[i]+n[j]+n2[k]==0):
                            s=[n1[i],n[j],n2[k]]
                            s.sort()
                            chk=0
                            for m in range(len(l)):
                                if(s==l[m]):
                                    chk+=1
                            if(chk==0):
                                l.append(s)
        return l
        
        