a=[2,54,12,7,8,3,21,56,789,231,45,23,76,23,89,13]
#find 3

def bubble(a):
    for i in range (0,len(a)-1):
        for j in range (0,len(a)-1-i):  
            if(a[j]>a[j+1]):
                temp=a[j]
                a[j]=a[j+1]
                a[j+1]=temp
    return a   
  
 
bubble(a)
print("Sorted array")    
print(a)
