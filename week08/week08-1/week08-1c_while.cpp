//(1021-04-03) [while2] �H*��X�����T���� : ��J�����n�A��while��X�����T���ΡC
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
