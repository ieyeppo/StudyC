#include <stdio.h>

int main(void) {
	10 + 20;

	printf("Be Happy");
	printf("My friend");

	printf("be Happy\n");

	printf("1234578901234567890\n");
	printf("My\tfriend\n");

	printf("Goot\bd\tchance\n");

	printf("Cow\rW\a\n");

	printf("%d\n", 10);
	printf("%.lf\n", 3.4);
	printf("%.1lf\n", 3.45);
	printf("%.10lf\n", 3.4);

	printf("%d와 %d의 합은 %d 입니다.\n", 10, 20, 10 + 20);
	printf("%x\n", 12);

	printf("%d\n", 12);
	printf("%d\n", 014);
	printf("%d\n", 0xc);

	printf("%.1lf\n", 1e6);
	printf("%.7lf\n", 3.14e-5);
	printf("%.lef\n", 0.0000314);
	printf("%.2lef\n", 0.0000314);

	printf("%c\n", 'A');
	printf("%s\n", "A");
	printf("%c은 %s 입니다.\n", '1', "first");

	return 0;
}