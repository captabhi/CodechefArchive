import math
m=int(1000000007)
t=int(raw_input())
a=[]
a.append(int(1))
a.append(int(2))
a.append(int(2))
a.append(int(6))
a.append(int(12))
val=16
for i in range (1100):
    temp=2*val
    for j in range (1,int(math.sqrt(i))):
        if i%j==0:
            temp=temp-a[j]
    a.append(int(temp))
    val=(val+val)
for i in range (t):
    l=int(raw_input())
    r=int(raw_input())
    sum=0
    for j in range(l,r):
        sum=(sum+a[j])%m
    print sum
    print "\n"
    
        
