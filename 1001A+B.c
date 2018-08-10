/*1001 A+B Format (20)��20 �֣�
Calculate a + b and output the sum in standard format -- that is, the digits must be separated into groups of three by commas (unless there are less than four digits).

Input

Each input file contains one test case. Each case contains a pair of integers a and b where -1000000 <= a, b <= 1000000. The numbers are separated by a space.

Output

For each test case, you should output the sum of a and b in one line. The sum must be written in the standard format.

Sample Input

-1000000 9
Sample Output

-999,991
����: CHEN, Yue
��λ: PAT����
ʱ������: 400ms
�ڴ�����: 64MB
���볤������: 16KB*/
//����������-1000000��1000000֮������� ����� ʹ�ú����Ϊ��׼��ʽ 
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
 //���������˿��� ������ 
 
 
 
 
 
 
 
 
 
