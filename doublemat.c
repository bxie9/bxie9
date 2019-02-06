#include <stdio.h>
#include <stdlib.h>

double randfrom(double min, double max) 
{
    double range = (max - min); 
    double div = RAND_MAX / range;
    return min + (rand() / div);
}
 
int main(void)
{
	
	int m=3;
	int r=4;
	int n=5;
	double a;
	double A[m][r], B[r][n], C[m][n];
 
	//输入A，B两个矩阵
	for (int i = 0; i <= m - 1; i++) {
		for (int j = 0; j <= r - 1; j++) {
			double a = randfrom(0,100);
			A[i][j]=a;
			}
		}
	for (int i = 0; i <= r - 1; i++) {
		for (int j = 0; j <= n - 1; j++) {
			double a = randfrom(0,100);
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
			printf("%10.5f", C[i][j]);
			printf("--");
			}
			printf("\n");
		}
 
	return 0;

}