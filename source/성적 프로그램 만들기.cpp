#include <stdio.h>
int main() {
	int score[21][10] = {0};
	int sum[21] = {0};
	int ave[21] = {0};
	int subjectSum[10] = {0};
	float subjectAve[10]; 
	
	int studentCount = 0;
	int subjectCount = 0;
	
	printf("�л� �� �Է� : ");
	scanf("%d", &studentCount);
	printf("���� �� �Է� : ");
	scanf("%d", &subjectCount);
	for(int index = 0; index <studentCount; index++) {//index1�� �л� �� ��ŭ for�� 
		printf("Koposw%d �л��� ���� %d���� ���ʴ�� �Է��ϼ���: ", index, subjectCount);
		for(int index2 = 0; index2 < subjectCount; index2++) {
			scanf("%d", &score[index][index2]);//index2�� ����� ��ŭ for���� ������ �Է��ض� 
		}
		
	}
	for(int index = 0; index <studentCount; index++) {//index1�� �л� �� ��ŭ for�� 
		int sum = 0; 
		float ave = 0; 
		for(int index2 = 0; index2 < subjectCount; index2++) {//index2�� ����� ��ŭ for��
			sum += score[index][index2]; //�� �ε����� sum���� ���ض� 
			subjectSum[index2] += score[index][index2]; //���� �ε����� ���ھ� �ε����� ��� �־ �Է� 
		}
		ave = sum / (float)subjectCount; // ������ ��� 
		printf("Koposw%d �л��� ���� %d, ��� %5.2f\n", index, sum, ave);
	}
	for(int index = 0; index < subjectCount; index++) {
		subjectAve[index] = subjectSum[index] / (float)studentCount; 
		printf("����%d ��� %5.2f\n", index, subjectAve[index]);
	}
	return 0;
}
