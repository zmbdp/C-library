#include "da.h"

int main()
{
	DD dui;
	ChuShiHua(&dui);
	ChaRu(&dui, 12);
	ChaRu(&dui, 15);
	ChaRu(&dui, 17);
	ChaRu(&dui, 55);
	ChaRu(&dui, 92);
	ChaRu(&dui, 345);
	ChaRu(&dui, 24);
	ChaRu(&dui, 355);
	ChaRu(&dui, 17);
	ChaRu(&dui, 365);
	ChaRu(&dui, 325);
	ChaRu(&dui, 3245);
	ChaRu(&dui, 9876);

	shanchu(&dui);

	/*int k = 0;
	scanf("%d", &k);*/
	while (!panduan(&dui))
	{
		printf("%d ", quding(&dui));
		shanchu(&dui);
	}
	printf("\n");
	return 0;
}