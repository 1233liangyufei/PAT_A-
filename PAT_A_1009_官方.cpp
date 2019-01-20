#include <stdio.h>
#include<stdlib.h>
//#include <iostream>
#include <string.h>
//#include <string>
//#include <sstream>
//#include <math.h>

struct {
	int exp;
	double cof;
}poly[1001];
double ans[2010];

int main()
{   
	int n, m, count = 0;

	double a;
	scanf("%d", &n);
	for (int i = 0; i < n;i++) {
		scanf("%d %lf", &poly[i].exp, &poly[i].cof);
	}//输入第一个多项式
	scanf("%d", &m);
	for (int i = 0; i < m;i++) {
		int exp;
		double cof;
		scanf("%d %lf", &exp, &cof);
		for (int j = 0; j < n; j++) {
			ans[exp + poly[j].exp] += (cof*poly[j].cof);
		}
	}//输入第二个多项式


	for (int i = 0; i < 2010; i++) {
		if (ans[i] != 0.0) {
			count++;
		}//计算多项式个数
	
	}
	printf("%d", count);

	for (int i = 2010-1; i >= 0; i--) {
		if (ans[i] != 0.0) {
			printf(" %d %.1f", i, ans[i]);
		}//输出A+B的多项式
	}


	system("pause");
	return 0;
}
