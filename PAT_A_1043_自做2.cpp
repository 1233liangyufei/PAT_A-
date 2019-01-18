#include<cstdio> // C++代码推荐使用 cstdio 而不是stdio.h
#include <stdlib.h> 
#include<string.h> 
/*
思路：
1. 54张牌，根据编号即可知道每张牌的花色；
2. 1-13时黑桃，14-16是红桃，17-39是梅花，40-52是方块，53-54是梅花；
3.
*/
int main() {
	int n;   //记录洗牌次数
	int num[54];  //记录洗牌方法，他的值num[i]代表将i+1个牌洗入num[i]
	char ch[5] = { 'S','H','C','D','J' }; //根据牌号通过数学方法可以换算为牌号  如2号可以(2-1）/13 得‘S’,（2-1）%13+1得2 得S2牌号
	int start[55], end[55];   //记录洗牌开始与洗牌之后的牌序

	scanf("%d", &n);
	for (int i = 0; i < 54; i++) {
		start[i] = i+1;
	}    //初始化牌序
	for (int i = 0; i < 54; i++) {
		scanf("%d", &num[i]);
	}    //输入洗牌方法
	while (n--) {
		for (int i = 0; i < 54; i++) {
			end[num[i]-1] = start[i];
		}//一次洗牌
		for (int i = 0; i < 54; i++) {
		    start[i] = end[i];
		}//将洗后牌赋值给初始牌，方便下一次迭代
	}
	for (int i = 0; i < 54; i++) {
		printf("%c%d", ch[(end[i]-1) / 13],(end[i]-1)%13+1);   //例如13号 （13-1）/13 =0，黑桃，（13-1）%13+1 =13，，13为黑桃13
		if (i != 53) {
			printf(" ");//最后一个不输出空格
		}
	}
	system("pause");
	return 0;
}


/*
总结：
1. 

*/