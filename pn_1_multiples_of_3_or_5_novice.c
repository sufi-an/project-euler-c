
// If we list all the natural numbers below 10(n) that are multiples of 
// 3(x) or 5(y), we get 3, 5, 6 and 9.
// The sum of these multiples is 23(sum).
// Find the sum of all the multiples of x or y below n.

#include <stdio.h>

int str_to_int(char *s){
  int i=0;
  int num=0;
  while (s[i]!='\0') {
    int temp = s[i]-48;
    num = (num * 10) + temp;
    i++;
   } 
  return num;
}

int main(int argc, char *argv[])
{
  int n = str_to_int(argv[1]);
  int x = str_to_int(argv[2]), y= str_to_int(argv[3]);
  int sum = 0;
 
  for (int i=1;i<n;i++) if (i%x == 0 || i%y == 0) sum+=i; 
  
  printf("%d\n",sum);
  return 0;
}
