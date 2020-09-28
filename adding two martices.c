#include<stdio.h>
int main()
{
	int i,j,c[3][3]=0,a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int b[3][3]={{2,2,2},{2,2,2},{2,2,2}};
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		c[i][j]+=a[i][j]+b[i][j];
	}
	printf("%d",c[i][j]);
	return 0;
	
}
