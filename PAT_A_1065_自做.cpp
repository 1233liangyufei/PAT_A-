#include<cstdio> // C++代码推荐使用 cstdio 而不是stdio.h
#include <stdlib.h> 
#include<string.h> 
using namespace std;
/*
思路：
1. 在输入路径距离时，将从1出发的到各点距离保存在dis数组中；
2. 顺时针距离就是dis[right]-dis[left]
3. 逆时针距离就是sum - （dis[]-dis[]）
4. 二者最小就是最短距离
*/;
//a = %lld   b= %lld   c = %lld \n

int main() {
	int n;//记录 数据组数
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
总结：
1.

*/