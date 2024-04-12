//(1021-04-04) [for2] 以*輸出直角三角形 : 輸入正整數n，用for輸出直角三角形。
//Part3.for()
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		int space=n-i;
		for(int k=1; k<=n; k++){
			if(k<=space) printf(" ");
			else printf("*");
		}
		printf("\n");
	}
}//Part3.for()
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		int space=n-i;
		for(int k=1; k<=n; k++){
			if(k<=space) printf(" ");
			else printf("*");
		}
		printf("\n");
	}
}
