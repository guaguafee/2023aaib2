//(1021-04-04) [for2] �H*��X�����T���� : ��J�����n�A��for��X�����T���ΡC
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
