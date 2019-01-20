#include <stdio.h>
#include<stdlib.h>
//#include <iostream>
#include <string.h>
//#include <string>
//#include <sstream>
//#include <math.h>

const int max_n = 1111;//数组最大容量

int main()
{   
	double p[max_n] ;//未初始化
	for (int i = 0; i < max_n; i++) {
		p[i] = 0;
	}//初始化数组全部置0

	int k, n, count = 0;

	double a;
	scanf("%d", &n);
	while (n--) {
		scanf("%d %lf", &k, &a);
		p[k] += a;
	}//输入第一个多项式
	scanf("%d", &n);
	while (n--) {
		scanf("%d %lf", &k, &a);
		p[k] +=a;
	}//输入第二个多项式
	for (int i = 0; i < max_n; i++) {
		if (p[i] != 0) {
			count++;
		}//计算多项式个数
	
	}
	printf("%d", count);

	for (int i = max_n-1; i >= 0; i--) {
		if (p[i] != 0) {
			printf(" %d %.1f", i, p[i]);
		}//输出A+B的多项式
	}


	system("pause");
	return 0;
}
