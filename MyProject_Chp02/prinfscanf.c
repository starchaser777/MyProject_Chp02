#include <stdio.h>
int main(void)
{
	// 정수형 변수에 대한 예제
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);*/

	// 실수형 변수에 대한 예제
	/*float f = 46.5f;
	printf("%.2f\n", f);
	double d = 4.428;
	printf("%.2lf\n", d);*/

	//const int YEAR = 2000; // 상수
	//printf("태어난 년도 : %d\n", YEAR);
	//YEAR = 2001;

	// printf
	// 연산
	// int add = 3 + 7; // 10
	// printf("3 + 7 = %d\n", add);
	// printf("%d * %d = %d\n", 30, 79, 30 * 79);


	// scanf
	// 키보드 입력을 받아서 저장
	/*int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input);
	printf("입력값 : %d\n", input);*/

	/*int one, two, three;
	printf("3개의 정수를 입력하세요 : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫번째 값 = %d\n", one);
	printf("두번째 값 = %d\n", two);
	printf("세번째 값 = %d\n", three);*/

	// 문자(한 글자), 문자열(한 글자 이상의 여러 글자)
	/*char c = 'A';
	printf("%c\n", c);*/

	/*char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);*/

	// 프로젝트
	// 경찰관이 범죄자의 정보를 입수 (조서 작성)
	// 이름? 나이? 몸무게? 키? 범죄명?
	/*char name[256];
	printf("이름이 뭐예요? ");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("몇살이에요? ");
	scanf_s("%d", &age);

	float weight;
	printf("몸무게는 몇 kg이에요? ");
	scanf_s("%f", &weight);

	double height;
	printf("키는 몇 cm예요? ");
	scanf_s("%lf", &height);

	char what[256];
	printf("무슨 범죄를 저질렀어요? ");
	scanf_s("%s", what, sizeof(what));*/

	// 조서 내용 출력
	/*printf("\n\n--- 범죄자 정보 ---\n");
	printf(" 이름        : %s\n", name);
	printf(" 나이        : %d\n", age);
	printf(" 몸무게      : %.2f\n", weight);
	printf(" 키          : %.2lf\n", height);
	printf(" 범죄명      : %s\n", what);*/

	// 1분 퀴즈 1번
	/*float f = 2121.1020f;
	printf("%.3f\n", f);*/

	// 1분 퀴즈 2번
	/*char str1[256], str2[256];
	printf("첫 번째 문자열을 입력하세요 : ");
	scanf_s("%s", str1, sizeof(str1));
	printf("두 번째 문자열을 입력하세요 : ");
	scanf_s("%s", str2, sizeof(str2));
	printf("첫 번째 문자열입니다 : %s\n", str1);
	printf("두 번째 문자열입니다 : %s\n", str2);*/

	// 셀프체크 - 경찰 조서 쓰기 프로그램을 활용한 신발 쇼핑몰의 회원 가입 프로그램
	/*char name[256];
	printf("이름을 입력하세요 : ");
	scanf_s("%s", name, sizeof(name));

	char id[256];
	printf("id를 입력하세요 : ");
	scanf_s("%s", id, sizeof(id));

	int age;
	printf("나이를 숫자로 입력하세요 : ");
	scanf_s("%d", &age);

	char birthday[256];
	printf("생일을 숫자로 입력하세요(월일, 예: 0720) : ");
	scanf_s("%s", birthday, sizeof(birthday));

	int shoes_size;
	printf("신발 크기를 입력하세요(mm) : ");
	scanf_s("%d", &shoes_size);

	printf("\n\n --- 회원 정보 --- \n\n");
	printf(" 이름         : %s\n", name);
	printf(" id           : %s\n", id);
	printf(" 나이         : %d\n", age);
	printf(" 생일         : %s\n", birthday);
	printf(" 신발 크기    : %d\n", shoes_size);*/

	return 0;
}