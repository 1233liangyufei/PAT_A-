#include<cstdio> // C++�����Ƽ�ʹ�� cstdio ������stdio.h
#include <stdlib.h> 
#include<string.h> 
/*
˼·��*/
//int num[100000];
int main() {
	int num[100000] = {0};//�洢·�߾���
	int N,M,a,b,dis,dis1=0,dis2=0;//N�ǽ������M�Ǽ���������a,b��Ҫ��������·�ߵ�·����dis��¼˳ʱ����룬dis2��¼��ʱ����룬dis����̾���
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &num[i]);
	}//����·�߾���
	/*for (int i = 0; i < N; i++) {
		printf("%d", num[i]);
	}*/
	//getchar();
	scanf("%d", &M);//����M��·��
	for (int i = 0; i < M; i++) {
		dis1 = 0, dis2 = 0;
		scanf("%d%d", &a, &b);
		for (int j = a-1; j%N!=b-1; j=(j+N+1)%N) {

			dis1 += num[j];//˳ʱ��
			//printf("%d  %d", dis1, dis2);
			//printf("%d %d %d  %d\n", j,num[j ], dis1, dis2);
		}
		for (int j = a-1; j%N!=b-1; j=(j+N-1)%N) {
			dis2 += num[(j+N-1)%N];//��ʱ��
			//printf("%d %d  %d\n", num[j],dis1, dis2);
		}
		//printf("%d  %d\n", dis1, dis2);
		dis = dis1 < dis2 ? dis1 : dis2;
		printf("%d\n", dis);//������·��
	}
	
	system("pause");
	return 0;
}


/*
�ܽ᣺
1.ÿ�����ж�Ҫ��ѯ�����ڴ������ᳬʱ

*/