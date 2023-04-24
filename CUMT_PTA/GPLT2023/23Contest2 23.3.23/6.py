x=eval(input())
num=1
i=1
while num%x!=0:
    num*=10
    num+=1
    i+=1
print(int(num/x),i)