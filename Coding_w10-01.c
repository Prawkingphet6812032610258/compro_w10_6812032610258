#include <stdio.h>

int main() {
    int num_students, i;
    float score, sum_scores = 0.0, average_score;

    // 1] รับค่าจากแป้นพิมพ์
    // 1.1 จำนวน นศ. ในชั้นเรียน
    printf("Enter number of students: ");
    scanf("%d", &num_students);

    // 1.2 รับค่าคะแนนนักเรียนทีละคน
    printf("\nEnter %d student scores (one per line):\n", num_students);
    for (i = 1; i <= num_students; i++) {
        printf("Score %d: ", i);
        scanf("%f", &score);
        sum_scores += score;
    }

    // 2] คำนวณและแสดงผลลัพธ์
    // 2.1 คำนวณค่าเฉลี่ย
    if (num_students > 0) {
        average_score = sum_scores / num_students;
    } else {
        average_score = 0;
    }
    
    // 2.2 แสดงจำนวนและค่าเฉลี่ย
    printf("\nNumber of students = %d Average score = %.2f\n", num_students, average_score);

    return 0;
}
