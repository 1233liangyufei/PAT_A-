#include<cstdio> // C++�����Ƽ�ʹ�� cstdio ������stdio.h
#include <stdlib.h> 
#include<string.h> 
/*
˼·��
1. 54���ƣ����ݱ�ż���֪��ÿ���ƵĻ�ɫ��
2. 1-13ʱ���ң�14-16�Ǻ��ң�17-39��÷����40-52�Ƿ��飬53-54��÷����
3.
*/;
int main() {
	int num[100000] = { 0 };
	int N, M, a, b, dis[100000], dis1 = 0, dis2 = 0,sum=0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &num[i]);
		sum += num[i];
		dis[i] = sum;
	}
	/*for (int i = 0; i < N; i++) {
		printf("%d   ", dis[i]);
	}
	getchar();
	*/
	int temp;
	//printf("%d %d\n", sum,dis[1]);
	scanf("%d", &M);
	for (int i = 0; i < M; i++) {
		//dis1 = 0, dis2 = 0;
		scanf("%d%d", &a, &b);
		if (a > b) {
			temp = a;
			a = b;
			b = temp;
		}
		if (a != 1) {
			dis1 = dis[b - 2] - dis[a - 2];
		}
		else {
			dis1 = dis[b - 2];
		}
		dis2 = sum - dis1;
		printf("%d\n", dis1 > dis2 ? dis2 : dis1);
	}
	system("pause");
	return 0;
}


/*
�ܽ᣺
1.

*/