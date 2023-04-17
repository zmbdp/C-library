#include"zhan.h"


void test()
{
	zhan pb;
	chushihua(&pb);
	charu(&pb, 1);
	charu(&pb, 2);
	charu(&pb, 3);
	charu(&pb, 4);
	charu(&pb, 5);

	//shanchu(&pb);
	//shanchu(&pb);
	//shanchu(&pb);
	//shanchu(&pb);
	//shanchu(&pb);

	while(!panduankongbukong(&pb))
	{
		printf("%d ", quzhanding(&pb));
		shanchu(&pb);
	}

	shifang(&pb);

}


int main()
{
	test();
	return 0;
}