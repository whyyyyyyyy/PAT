/*1001 A+B Format (20)（20 分）
Calculate a + b and output the sum in standard format -- that is, the digits must be separated into groups of three by commas (unless there are less than four digits).

Input

Each input file contains one test case. Each case contains a pair of integers a and b where -1000000 <= a, b <= 1000000. The numbers are separated by a space.

Output

For each test case, you should output the sum of a and b in one line. The sum must be written in the standard format.

Sample Input

-1000000 9
Sample Output

-999,991
作者: CHEN, Yue
单位: PAT联盟
时间限制: 400ms
内存限制: 64MB
代码长度限制: 16KB*/
//输入两个在-1000000到1000000之间的整数 计算和 使得和输出为标准格式 
#include <stdio.h>
int main(int argc,char *argv[])
{
  int a,b;
  int sum=0,abssum=0;
  scanf("%d %d",&a,&b); 
  sum=a+b;
  abssum=sum;
  if(sum<0) abssum=-sum;
  if(abssum<1000 ) printf("%d",sum);
  if(abssum>=1000&&abssum<1000000) printf("%d,%03d",sum/1000,abssum%1000);
  else if(abssum>=1000000) printf("%d,%03d,%03d",sum/1000000,(abssum/1000)%1000,abssum%1000);
  return 0;
 } 
 //做这题钻了空子 。。。 
 
 
 
 
 
 
 
 
 
