#include<cstdio> // C++�����Ƽ�ʹ�� cstdio ������stdio.h
#include <stdlib.h> 
#include<string.h> 
using namespace std;
/*
˼·��
1. ��������ֱ�ӱȽϼ���
2. ���������������赥������
3. ��������������������ᵼ��a>0,b>0,a+b<0���
4. ����������֣�a<0,b<0,a+b>=0�����
*/;
//a = %lld   b= %lld   c = %lld \n

int main() {
	int n;//��¼ ��������
	scanf("%d", &n);
	//getchar();
	long long a, b, c;
	for (int i = 1; i <= n; i++) {
		scanf("%lld  %lld  %lld", &a, &b, &c);
		long long res = a + b;//����a+b,ֱ�ӱȽϻ����
		bool flag=false;
		if (a > 0 && b > 0 && res < 0) flag = true;
		else if (a < 0 && b < 0 && res>=0) flag = false;
		else if (res > c) flag = true;
		if (flag) {
			printf("Case #%d: true\n", i);
		}
		else {
			printf("Case #%d: false\n", i);
		}
	}

	system("pause");
	return 0;
}


/*
�ܽ᣺
1.

*/