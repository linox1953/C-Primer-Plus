#include <stdio.h>

void butler(void); // ����ԭ��

int main(void)
{
	printf("I will summon the butler funciton.\n");
	butler();
	printf("Yes. Bring me some tea and writeable DVDs.\n");

	return 0;
}

void butler(void) // ��������
{
	printf("You rang, sir?\n");
}