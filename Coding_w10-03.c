#include <stdio.h>
#include <string.h>

int main() {
    char name1[50]; // กำหนดขนาดของสตริงสำหรับชื่อลูกค้าคนที่ 1
    char name2[50]; // กำหนดขนาดของสตริงสำหรับชื่อลูกค้าคนที่ 2

    // รับค่าชื่อลูกค้าคนที่ 1
    printf("Enter name of customer 1: ");
    scanf("%s", name1);

    // รับค่าชื่อลูกค้าคนที่ 2
    printf("Enter name of customer 2: ");
    scanf("%s", name2);

    // ตรวจสอบเงื่อนไขว่าชื่อทั้งสองคนเหมือนกันหรือไม่
    if (strcmp(name1, name2) == 0) {
        // กรณีที่ 1: ชื่อทั้งสองคนเหมือนกัน
        printf("Both of your names are the same, which is %s.\n", name1);
        printf("The length of the name is %zu characters.\n", strlen(name1));
    } else {
        // กรณีที่ 2: ชื่อทั้งสองคนไม่เหมือนกัน
        printf("Customer 1: %s (%zu characters)\n", name1, strlen(name1));
        printf("Customer 2: %s (%zu characters)\n", name2, strlen(name2));
    }

    return 0;
}