#include<cstdio> // C++�����Ƽ�ʹ�� cstdio ������stdio.h
#include <stdlib.h> 
#include<string.h> 
using namespace std;
/*
˼·��
1. ������·������ʱ������1�����ĵ�������뱣����dis�����У�
2. ˳ʱ��������dis[right]-dis[left]
3. ��ʱ��������sum - ��dis[]-dis[]��
4. ������С������̾���
*/;
//a = %lld   b= %lld   c = %lld \n

int main() {
	int n;//��¼ ��������
	scanf("%d", &n);
	//getchar();
	long long a, b, c;
	for (int i = 1; i <= n; i++) {
		scanf("%lld  %lld  %lld", &a, &b, &c);
		if ((a + b) > c) {
			printf("Case #%d: true\n", i);
		}
		else{
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