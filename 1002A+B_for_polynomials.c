/*1002 A+B for Polynomials (25)（25 分）
This time, you are supposed to find A+B where A and B are two polynomials.

Input

Each input file contains one test case. Each case occupies 2 lines, and each line contains the information of a polynomial: K N1 a~N1~ N2 a~N2~ ... NK a~NK~, where K is the number of nonzero terms in the polynomial, Ni and a~Ni~ (i=1, 2, ..., K) are the exponents and coefficients, respectively. It is given that 1 <= K <= 10，0 <= NK < ... < N2 < N1 <=1000.

Output

For each test case you should output the sum of A and B in one line, with the same format as the input. Notice that there must be NO extra space at the end of each line. Please be accurate to 1 decimal place.

Sample Input

2 1 2.4 0 3.2
2 2 1.5 1 0.5
Sample Output

3 2 1.5 1 2.9 0 3.2
*/ 
#include <stdio.h>
#include <math.h>
typedef struct _poly
{
	int exp;
	float coef;
}poly;
int main (int argc,char *argv[])
{
	int K1,K2,i,j,K3;
	poly P1[11],P2[11],sumP3[22];
	scanf("%d",&K1);
	for(i=0;i<K1;i++) scanf("%d %f",&P1[i].exp,&P1[i].coef);
    scanf("%d",&K2);
	for(i=0;i<K2;i++) scanf("%d %f",&P2[i].exp,&P2[i].coef);
	i=0;
	j=0;
	K3=0;
	while(i<K1&&j<K2)
	{
		if(P1[i].exp>P2[j].exp)
		{
		 sumP3[K3].exp=P1[i].exp;
		 sumP3[K3].coef=P1[i].coef;
		 i++;
     	}
		 else if(P1[i].exp<P2[j].exp)
		 //一开始只是if 不是else if 
		 //问题是 当第一项大的时候 第一次比较p3不会存数据 而是从第二次才开始存 
		 //测试点一一直出错 修改后测试过了 虽然有点不理解。。。 
		 //追加：原来是判断不平行 else会在P1大于P2时再次赋值 因此报错 淦 原来这么弱智 
		{
		 sumP3[K3].exp=P2[j].exp;
		 sumP3[K3].coef=P2[j].coef;
		 j++;
     	}
		else 
		{
		sumP3[K3].coef= P1[i].coef+P2[j].coef;
		sumP3[K3].exp=P1[i].exp;	
		i++;
		j++;
     	}
		if(fabs(sumP3[K3].coef)>=0.05) 
		 K3++;
	}
	for(;i<K1;i++) 
	{
		sumP3[K3].exp=P1[i].exp;
		sumP3[K3].coef=P1[i].coef;
		K3++;
	}
	for(;j<K2;j++) 
	{
		sumP3[K3].exp=P2[j].exp;
		sumP3[K3].coef=P2[j].coef;
		K3++;
	}
	printf("%d",K3);
	for(i=0;i<K3;i++)
	printf(" %d %.1f",sumP3[i].exp,sumP3[i].coef);
	
	return 0;
}






















