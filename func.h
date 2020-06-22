#include "struct.h"

/*struct river* parm-указатель на массив структур
функция принимает массив структур,считает сумму длин  рек у которых глубина больше 50м
и возращает её*/

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