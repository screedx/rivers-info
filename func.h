#include "struct.h"

/*struct river* parm-��������� �� ������ ��������
������� ��������� ������ ��������,������� ����� ����  ��� � ������� ������� ������ 50�
� ��������� �*/

int length(struct river* parm)
{
	int sum = 0;
	for (int i = 0; i < 12; i++)
	{
		if (parm[i].depth < 50)
			sum += parm[i].length;
	}
	return sum;
}