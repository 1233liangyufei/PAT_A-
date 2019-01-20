#include <stdio.h>
#include<stdlib.h>
//#include <iostream>
#include <string.h>
//#include <string>
//#include <sstream>
//#include <math.h>
int main()
{
	float a[1010] = { 0 }, b[1010] = { 0 }, c[1010] = {0};
	int e=0;
	float con=0;
	int m,n;
	 int count = 0;
	scanf("%d", &m);
	while (m--) {
		scanf("%d %f", &e, &con);
		a[e] = con;
	}
	scanf("%d", &n);
	while (n--) {
		scanf("%d %f", &e, &con);
		b[e] = con;
	}
	for (int i = 0; i < 1010; i++) {
		c[i] = a[i] + b[i];
		if (c[i] != 0) count++;
	}
	printf("%d", count);
	
	for (int i = 1005; i>=0; i--) {
		if (c[i] != 0) {
			count--;
			if(count!=0)
			printf(" %d %.1f", i, c[i]);
			else printf(" %d %.1f", i, c[i]);
		}
	}
	

	system("pause");
	return 0;
}
