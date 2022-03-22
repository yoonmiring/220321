#include <stdio.h>
int main() {
	int score[21][10] = {0};
	int sum[21] = {0};
	int ave[21] = {0};
	int subjectSum[10] = {0};
	float subjectAve[10]; 
	
	int studentCount = 0;
	int subjectCount = 0;
	
	printf("학생 수 입력 : ");
	scanf("%d", &studentCount);
	printf("과목 수 입력 : ");
	scanf("%d", &subjectCount);
	for(int index = 0; index <studentCount; index++) {//index1에 학생 수 만큼 for문 
		printf("Koposw%d 학생의 점수 %d개를 차례대로 입력하세요: ", index, subjectCount);
		for(int index2 = 0; index2 < subjectCount; index2++) {
			scanf("%d", &score[index][index2]);//index2에 과목수 만큼 for문을 돌려서 입력해라 
		}
		
	}
	for(int index = 0; index <studentCount; index++) {//index1에 학생 수 만큼 for문 
		int sum = 0; 
		float ave = 0; 
		for(int index2 = 0; index2 < subjectCount; index2++) {//index2에 과목수 만큼 for문
			sum += score[index][index2]; //두 인덱스의 sum값을 구해라 
			subjectSum[index2] += score[index][index2]; //과목 인덱스에 스코어 인덱스를 계속 넣어서 입력 
		}
		ave = sum / (float)subjectCount; // 과목의 평균 
		printf("Koposw%d 학생의 총점 %d, 평균 %5.2f\n", index, sum, ave);
	}
	for(int index = 0; index < subjectCount; index++) {
		subjectAve[index] = subjectSum[index] / (float)studentCount; 
		printf("과목%d 평균 %5.2f\n", index, subjectAve[index]);
	}
	return 0;
}
