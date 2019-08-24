/*Given a N x N binary matrix A where each row and column of the matrix is sorted in ascending order , Your task is to complete the function  countZero which returns the count of  number of 0s present in it.

Note : Elements in matrix can be either 1 or 0

Input:
The first line of input will be the no of test cases then T test cases will follow . The second line of each test case contains two space separated integers M,N denoting the size of the 2 d matrix . Then in the next lines are the space separated values of the matrix A[ ] [ ] . 

Output:
The output will be the number of zeroes present in the square matrix.

Constraints:
1<=T<=50
1<=M,N<=50
0<=A[][]<=1
Example:
Input
1
3 3
0 0 0 0 0 1 0 1 1
Output
6
*/
#include<stdio.h>
int main()
	{
	int a[20][20],i,j,c,t,m,n;
	scanf("%d",&t);
	for(int q=0;q<t;q++)
		{c=0;
		scanf("%d %d",&m,&n);
		for(i=0;i<m;i++)
			{
			for(j=0;j<n;j++)
				{
				scanf("%d",&a[i][j]);
				if(a[i][j]==0)
					{
					c++;
					}
				}
			}
		printf("%d\n",c);
		}
	return 0;
	}
	
