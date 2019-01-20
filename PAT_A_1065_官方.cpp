#include<cstdio> // C++代码推荐使用 cstdio 而不是stdio.h
#include <stdlib.h> 
#include<string.h> 
using namespace std;
/*
思路：
1. 正常数据直接比较即可
2. 对于整数溢出情况需单独考虑
3. 对于两个正整数溢出，会导致a>0,b>0,a+b<0情况
4. 负整数会出现，a<0,b<0,a+b>=0的情况
*/;
//a = %lld   b= %lld   c = %lld \n

int main() {
	int n;//记录 数据组数
	scanf("%d", &n);
	//getchar();
	long long a, b, c;
	for (int i = 1; i <= n; i++) {
		scanf("%lld  %lld  %lld", &a, &b, &c);
		long long res = a + b;//保存a+b,直接比较会出错
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
总结：
1.

*/