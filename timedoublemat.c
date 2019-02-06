#include <stdio.h>
#include <stdlib.h>
#include <time.h>
     

double randfrom(double min, double max) 
{
    double range = (max - min); 
    double div = RAND_MAX / range;
    return min + (rand() / div);
}
 
int main(void)
{
	clock_t start, end;
	double cpu_time_used;
	int m=800;
	int r=300;
	int n=500;
	double a;
	double A[m][r], B[r][n], C[m][n];
 
	start = clock();
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
	end = clock();
 	cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	printf("%10.5f", cpu_time_used);
	
	return 0;

}