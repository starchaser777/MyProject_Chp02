#include <stdio.h>
int main(void)
{
	// ������ ������ ���� ����
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);*/

	// �Ǽ��� ������ ���� ����
	/*float f = 46.5f;
	printf("%.2f\n", f);
	double d = 4.428;
	printf("%.2lf\n", d);*/

	//const int YEAR = 2000; // ���
	//printf("�¾ �⵵ : %d\n", YEAR);
	//YEAR = 2001;

	// printf
	// ����
	// int add = 3 + 7; // 10
	// printf("3 + 7 = %d\n", add);
	// printf("%d * %d = %d\n", 30, 79, 30 * 79);


	// scanf
	// Ű���� �Է��� �޾Ƽ� ����
	/*int input;
	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &input);
	printf("�Է°� : %d\n", input);*/

	/*int one, two, three;
	printf("3���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("ù��° �� = %d\n", one);
	printf("�ι�° �� = %d\n", two);
	printf("����° �� = %d\n", three);*/

	// ����(�� ����), ���ڿ�(�� ���� �̻��� ���� ����)
	/*char c = 'A';
	printf("%c\n", c);*/

	/*char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);*/

	// ������Ʈ
	// �������� �������� ������ �Լ� (���� �ۼ�)
	// �̸�? ����? ������? Ű? ���˸�?
	/*char name[256];
	printf("�̸��� ������? ");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("����̿���? ");
	scanf_s("%d", &age);

	float weight;
	printf("�����Դ� �� kg�̿���? ");
	scanf_s("%f", &weight);

	double height;
	printf("Ű�� �� cm����? ");
	scanf_s("%lf", &height);

	char what[256];
	printf("���� ���˸� ���������? ");
	scanf_s("%s", what, sizeof(what));*/

	// ���� ���� ���
	/*printf("\n\n--- ������ ���� ---\n");
	printf(" �̸�        : %s\n", name);
	printf(" ����        : %d\n", age);
	printf(" ������      : %.2f\n", weight);
	printf(" Ű          : %.2lf\n", height);
	printf(" ���˸�      : %s\n", what);*/

	// 1�� ���� 1��
	/*float f = 2121.1020f;
	printf("%.3f\n", f);*/

	// 1�� ���� 2��
	/*char str1[256], str2[256];
	printf("ù ��° ���ڿ��� �Է��ϼ��� : ");
	scanf_s("%s", str1, sizeof(str1));
	printf("�� ��° ���ڿ��� �Է��ϼ��� : ");
	scanf_s("%s", str2, sizeof(str2));
	printf("ù ��° ���ڿ��Դϴ� : %s\n", str1);
	printf("�� ��° ���ڿ��Դϴ� : %s\n", str2);*/

	// ����üũ - ���� ���� ���� ���α׷��� Ȱ���� �Ź� ���θ��� ȸ�� ���� ���α׷�
	/*char name[256];
	printf("�̸��� �Է��ϼ��� : ");
	scanf_s("%s", name, sizeof(name));

	char id[256];
	printf("id�� �Է��ϼ��� : ");
	scanf_s("%s", id, sizeof(id));

	int age;
	printf("���̸� ���ڷ� �Է��ϼ��� : ");
	scanf_s("%d", &age);

	char birthday[256];
	printf("������ ���ڷ� �Է��ϼ���(����, ��: 0720) : ");
	scanf_s("%s", birthday, sizeof(birthday));

	int shoes_size;
	printf("�Ź� ũ�⸦ �Է��ϼ���(mm) : ");
	scanf_s("%d", &shoes_size);

	printf("\n\n --- ȸ�� ���� --- \n\n");
	printf(" �̸�         : %s\n", name);
	printf(" id           : %s\n", id);
	printf(" ����         : %d\n", age);
	printf(" ����         : %s\n", birthday);
	printf(" �Ź� ũ��    : %d\n", shoes_size);*/

	return 0;
}