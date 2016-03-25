#include<stdio.h>
void MATMUL(int (*)[3],int (*)[4],int (*)[4],int ,int ,int );
int main()
{
	int A[2][3]={4,-3,5,6,1,-2};
	int B[3][4]={2,3,-7,-3,5,-1,6,2,0,3,-2,1};
	int C[2][4]={0};
	MATMUL(A,B,C,2,3,4);
	return 0;
}
void MATMUL(int (*A)[3],int (*B)[4],int (*C)[4],int M,int P,int N)
{
	int i,j,k;
	for(i=0;i<M;i++)
	{
		for(k=0;k<N;k++)
		{
			for(j=0;j<P;j++)
				C[i][k]=C[i][k]+(A[i][j]*B[j][k]);
			printf("%d\t",C[i][k]);
		}
		printf("\n");
	}
}
