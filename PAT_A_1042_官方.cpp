#include<cstdio> // C++�����Ƽ�ʹ�� cstdio ������stdio.h
#include <stdlib.h> 
#include<string.h> 
/*
˼·��
1. 54���ƣ����ݱ�ż���֪��ÿ���ƵĻ�ɫ��
2. 1-13ʱ���ң�14-16�Ǻ��ң�17-39��÷����40-52�Ƿ��飬53-54��÷����
3.
*/

//����������������
const int N = 54;
char mp[5] = { 'S','H','C','D','J' }; //�����ƺ�ͨ����ѧ�������Ի���Ϊ�ƺ�  ��2�ſ���(2-1��/13 �á�S��,��2-1��%13+1��2 ��S2�ƺ�
int start[N + 1], end[N + 1], next[N + 1];//��¼ϴ�ƿ�ʼ��ϴ��֮�������,next �����¼ϴ�Ʒ���������ֵnum[i]����i+1����ϴ��num[i]

int main() {
	
	int K;
	scanf("%d", &K);
	for (int i = 1; i <= N; i++) {
		start[i] = i;
	}//��ʼ������
	for (int i = 1; i <= N; i++) {
		scanf("%d", &next[i]);

	} //����ϴ�Ʒ���

	for(int step=0;step<K;step++) {
		for (int i = 1; i <= N; i++) {
			end[next[i]] = start[i];
		}//һ��ϴ��
		for (int i = 1; i <= N; i++) {
			start[i] = end[i];
		}//��ϴ���Ƹ�ֵ����ʼ�ƣ�������һ�ε���
	}
	for (int i = 1; i <= N; i++) {
		start[i]--;
		printf("%c%d", mp[start[i] / 13], start[i] % 13 + 1);   //����13�� ��13-1��/13 =0�����ң���13-1��%13+1 =13����13Ϊ����13
		if (i != N) {
			printf(" ");//���һ��������ո�
		}
	}
	system("pause");
	return 0;
}


/*
�ܽ᣺
1.

*/