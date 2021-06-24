#the else is exucuted  when the  experssion become false
#non-zero values are true  and zero means false
sum=0
i=1
while i<=10:
    sum=sum+i
    print("the value of sum is ",sum,"the velue of i is ",i)
    i=i+1
else:
     print("===============================================================================================================================================================")
     print("now the expression becopme to false because i is greater then sum so the expression become to false .when the equation is faluse then else statement will print")




#if i use breake statement   then else s is ignored
sum=0
i=1
while i<=10:
      sum=sum+i
      print("the value of sum is ",sum,"the velue of i is ",i)
      i=i+1
      break
else:
      print("===============================================================================================================================================================")
      print("now the expression becopme to false because i is greater then sum so the expression become to false .when the equation is faluse then else statement will print")
