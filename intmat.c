#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
	
	int m=3;
	int r=4;
	int n=5;
	int a;
	int A[m][r], B[r][n], C[m][n];
 
	//输入A，B两个矩阵
	for (int i = 0; i <= m - 1; i++) {
		for (int j = 0; j <= r - 1; j++) {
			int a = rand();
			A[i][j]=a;
			}
		}
	for (int i = 0; i <= r - 1; i++) {
		for (int j = 0; j <= n - 1; j++) {
			int a = rand();
			B[i][j]=a;
			}
		}
 
	//将矩阵（二维数组）C 的所有元素全部初始化为零
	for (int i = 0; i <= m - 1; i++) {
		for (int j = 0; j <= n - 1; j++) {
			C[i][j] = 0;
			}
		}
 
	//矩阵乘法
	for (int i = 0; i <= m - 1; i++) {
		for (int j = 0; j <= n - 1; j++) {
			for (int k = 0; k <= r - 1; k++) {
				C[i][j] += A[i][k] * B[k][j];
				}
			}
		}
	
	//输出结果
	for (int i = 0; i <= m - 1; i++) {
		for (int j = 0; j <= n - 1; j++) {
			printf("%d", C[i][j]);
			printf("--");
			}
			printf("\n");
		}
 
	return 0;

}