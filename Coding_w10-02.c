#include <stdio.h>

int main() {
    float scores[3][3];
    float math_avg, phy_avg, chem_avg;

    // 1) รับค่าคะแนนนักศึกษาทีละคน ทีละวิชา
    printf("Enter scores for 3 students in 3 subjects (Math, Physics, Chemistry):\n\n");

    for (int i = 0; i < 3; i++) {
        printf("Enter scores for Student %d:\n", i + 1);
        printf("Math: ");
        scanf("%f", &scores[i][0]);
        printf("Physics: ");
        scanf("%f", &scores[i][1]);
        printf("Chemistry: ");
        scanf("%f", &scores[i][2]);
        printf("\n");
    }

    // 2) แสดงผลลัพธ์
    // 2.1) แสดงคะแนนของนักศึกษาแต่ละคน ทั้ง 3 วิชา (ในตาราง)
    printf("Score Table:\n");
    printf("--------------------------------------------\n");
    printf("| Student | Math | Physics | Chemistry |\n");
    printf("--------------------------------------------\n");
    for (int i = 0; i < 3; i++) {
        printf("| %d | %.2f | %.2f | %.2f |\n", i + 1, scores[i][0], scores[i][1], scores[i][2]);
    }
    printf("--------------------------------------------\n\n");

    // 2.2) คำนวณและแสดงค่าเฉลี่ยของแต่ละวิชา
    math_avg = (scores[0][0] + scores[1][0] + scores[2][0]) / 3.0;
    phy_avg = (scores[0][1] + scores[1][1] + scores[2][1]) / 3.0;
    chem_avg = (scores[0][2] + scores[1][2] + scores[2][2]) / 3.0;

    printf("Average per subject:\n");
    printf("Math: %.2f\n", math_avg);
    printf("Physics: %.2f\n", phy_avg);
    printf("Chemistry: %.2f\n", chem_avg);

    return 0;
}