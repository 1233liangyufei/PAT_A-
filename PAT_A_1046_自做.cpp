#include<cstdio> // C++代码推荐使用 cstdio 而不是stdio.h
#include <stdlib.h> 
#include<string.h> 
/*
思路：*/
//int num[100000];
int main() {
	int num[100000] = {0};//存储路线距离
	int N,M,a,b,dis,dis1=0,dis2=0;//N是结点数，M是计算条数，a,b是要求计算最短路线的路径，dis记录顺时针距离，dis2记录逆时针距离，dis是最短距离
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &num[i]);
	}//输入路线距离
	/*for (int i = 0; i < N; i++) {
		printf("%d", num[i]);
	}*/
	//getchar();
	scanf("%d", &M);//输入M条路线
	for (int i = 0; i < M; i++) {
		dis1 = 0, dis2 = 0;
		scanf("%d%d", &a, &b);
		for (int j = a-1; j%N!=b-1; j=(j+N+1)%N) {

			dis1 += num[j];//顺时针
			//printf("%d  %d", dis1, dis2);
			//printf("%d %d %d  %d\n", j,num[j ], dis1, dis2);
		}
		for (int j = a-1; j%N!=b-1; j=(j+N-1)%N) {
			dis2 += num[(j+N-1)%N];//逆时针
			//printf("%d %d  %d\n", num[j],dis1, dis2);
		}
		//printf("%d  %d\n", dis1, dis2);
		dis = dis1 < dis2 ? dis1 : dis2;
		printf("%d\n", dis);//输出最短路径
	}
	
	system("pause");
	return 0;
}


/*
总结：
1.每次运行都要查询，对于大样例会超时

*/