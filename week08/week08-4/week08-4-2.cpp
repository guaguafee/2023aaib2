//(JY-E-03) [do...while]�p�⽽������Ѽ� : �p�Ǫ��ƾǰ��D�A���@�������C�ѥդѯદ5���رߤW�|���U��2���ءA�ЦP�ǥ��N��J���𪺰��סA�p��n�X�ѽ����~�દ�쳻��(�ݭn�W�V�L���ݤ~��)�H�Шϥ�do...while�����c��ҡC
#include <stdio.h>
int main ( void )
{
	int h,day=0;
	printf("�п�J���������檺���סG");
	//your code
		scanf("%d", &h);
	while(h>0){
		day++;
		h -= 5;
		if(h<0) break;
		h += 2;
	}
	while(h>0);
    printf("%d�ѥi���쳻��",day);
}
