#include <stdio.h>
#include<stdlib.h>
//#include <iostream>
#include <string.h>
//#include <string>
//#include <sstream>
//#include <math.h>

const int max_n = 1111;//�����������

int main()
{   
	double p[max_n] ;//δ��ʼ��
	for (int i = 0; i < max_n; i++) {
		p[i] = 0;
	}//��ʼ������ȫ����0

	int k, n, count = 0;

	double a;
	scanf("%d", &n);
	while (n--) {
		scanf("%d %lf", &k, &a);
		p[k] += a;
	}//�����һ������ʽ
	scanf("%d", &n);
	while (n--) {
		scanf("%d %lf", &k, &a);
		p[k] +=a;
	}//����ڶ�������ʽ
	for (int i = 0; i < max_n; i++) {
		if (p[i] != 0) {
			count++;
		}//�������ʽ����
	
	}
	printf("%d", count);

	for (int i = max_n-1; i >= 0; i--) {
		if (p[i] != 0) {
			printf(" %d %.1f", i, p[i]);
		}//���A+B�Ķ���ʽ
	}


	system("pause");
	return 0;
}
