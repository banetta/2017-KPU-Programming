#include <stdio.h>
#pragma warning (disable:4996) //VS2017 ȯ�濡�� scanf ��� ����

int main(void)
{
    printf("\t Hello C! \n Hello World! \n");
	printf("ū ����ǥ: \" \" \n");
	printf("���� ����ǥ: \' \' \n");
	printf("��������: \\ \n");

	printf("%d ���ϱ� %d �� %d �Դϴ� \n", 3, 5, 3 + 5);
	printf("%i ���ϱ� %i �� %i �Դϴ� \n", 3, 5, 3 + 5);
	printf("%d - %d = %d �Դϴ� \n", 3, 5, 3 - 5);
	printf("%i - %i = %i �Դϴ� \n", 3, 5, 3 - 5);

	printf("10���� ����: %d  \n", 0.5);
	printf("10���� �Ǽ�: %f  \n", 0.5);
	printf("10���� �Ǽ�: %lf \n", 0.5);

	printf("�Ҽ��� ���� 6�ڸ� �̻�: %f  \n", 0.5655678);
	printf("�Ҽ��� ���� 6�ڸ� �̻�: %0.20lf \n", 0.5667784);

	printf("10����: %d�� 16����: %x, 8����: %o �Դϴ�. \n", 50, 50, 50);
	printf("10����: %d�� 16����: %x, 8����: %o �Դϴ�. \n", -50, -50, -50);
	// 16������ 8������ ����ǥ�� �Ұ�

	printf("a�� �빮�ڷ� ǥ���ϸ� %c �Դϴ�. \n", 'A');
	printf("%s %c �Դϴ�. \n", "a�� �빮�ڷ� ǥ���ϸ�", 'A');
	printf("%s %d %s\n", "2���ϱ� 3��", 2 * 3, "�Դϴ�.");

	printf("%f \n", 0.000123);  // �Ҽ��� ���� 6�ڸ� 
	printf("%f \n", 0.0001236); // �Ҽ��� ���� 6�ڸ� �ʰ�

	printf("%e \n", 0.000123); // �Ҽ��� ���� 6�ڸ�  
	printf("%E \n", 0.0001236); // �Ҽ��� ���� 6�ڸ� �ʰ�  

	printf("%g \n", 0.000123); // �Ҽ��� ���� 6�ڸ�  
	printf("%G \n", 0.0000123456); // �Ҽ��� ���� 6�ڸ� �ʰ� 

	printf("���� �츮���� ���� ������� 5%% ��. \n");

	printf("%d \n", 2147483647); // 2147483647
	printf("%d \n", 2147483650); // -2147483646
	printf("%u \n", 4294967295); // 2147483647�� �ι�

	// printf���� �ڸ��� ǥ��
	printf("%03d, %03d, %03d \n", 1, 20, 300);
	printf("%-3d, %-3d, %-3d \n", 1, 20, 300);
	printf("%+3d, %+3d, %+3d \n", 1, 20, 300);
	printf("%+3d, %+3d, %+3d \n", 1, 20, -300);

	return 0;
}