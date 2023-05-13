int suanzi(char* n)
{
	int chang = 0;
	while (*n != '\0')
	{
		chang++;
		n++;
	}
	return chang;
}
int main()
{
	char arr[] = "hello";
	int chang = suanzi(arr);
	printf("chang=%d\n", chang);
	return 0;
}
