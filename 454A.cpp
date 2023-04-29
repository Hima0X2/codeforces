#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <math.h>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int n;

int main() {
	cin >> n;
	int temp = n / 2;
	int l = n / 2 + 1;
	for (int i = 1;i <= temp;++i) {
		for (int j = 1;j <= n;++j) {
			if (j == l) {
				for (int k = 1;k <= 2 * i - 1;++k) {
					printf("D");
				}
				l--;
				j = l + 2 * i - 1;
			}
			else {
				printf("*");
			}
		}
		printf("\n");
	}
	for (int i = 1;i <= n;++i) {
		printf("D");
	}
	printf("\n");
	temp = n / 2;
	l = 2;
	for (int i = temp;i >= 1;--i) {
		for (int j = 1;j <= n;++j) {
			if (j == l) {
				for (int k = 1;k <= 2 * i - 1;++k) {
					printf("D");
				}
				j = l + 2 * i - 2;
			}
			else {
				printf("*");
			}
		}
		l++;
		printf("\n");
	}
}
