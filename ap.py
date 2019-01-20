def  sumOfAP(a,  d,  n): 
    sum = (n / 2) * (2 * a + (n - 1) * d) 
    return sum
      
     
n,a,d =map(int,input().split())

  
print(sumOfAP(a, d, n)) 
