//(1021-04-03) [while2] 以*輸出直角三角形 : 輸入正整數n，用while輸出直角三角形。
//Part3.while()
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	int i=1;
	while(i<=n){


		int k=1;
		while(k<=n){
			if(k<=n-i) printf(" ");
			else printf("*");
			k++;
		}
		printf("\n");
		i++;
	}
}
