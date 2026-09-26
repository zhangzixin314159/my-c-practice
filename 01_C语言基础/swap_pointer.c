#include <stdio.h>

// 接收两个int指针
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int x, y;
    printf("请输入两个整数，用空格隔开：");
    scanf("%d %d", &x, &y);

    printf("交换前：x=%d, y=%d\n", x, y);
    swap(&x, &y);
    printf("交换后：x=%d, y=%d\n", x, y);

    return 0;
}
