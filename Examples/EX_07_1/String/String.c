/******************************************
 * 파일이름 : String.c
 * 파일용도 : 배열을 이용한 문자열 처리
 * 작성자 : 김명진
 *****************************************/
#include <stdio.h>

void main(void)
{
	int i, j;

	//문자열 처리
	char lang[]	 = "C Language!";
	char abc[]   = {'A', 'B', 'C', '\0'};
	char java[5] = "java";

	printf(lang);	printf("\n");
	printf(abc);	printf("\n");

	printf("%s %s\n", lang, abc);

	//선언된 배열 값을 출력
	for(i=0; java[i]; i++)
		printf("%c", java[i]);

	printf("\n\n");

	printf("char lang[] = \"C Language!\"; 이후\n");
	printf("lang[6] = '\\0'; 을 실행한 후\n");
	printf("문자열 lang을 출력하면 >> ");

	lang[6] = '\0';
	printf("%s\n", lang);
}