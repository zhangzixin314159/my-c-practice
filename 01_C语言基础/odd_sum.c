#include <stdio.h>

int main(void)
{
    int n;
    int sum = 0;
    int i;

    printf("请输入一个整数n：");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(i % 2 != 0)  // 判断是不是奇数
        {
            sum = sum + i;
        }
    }

    printf("1到%d之间所有奇数之和 = %d\n", n, sum);
    return 0;
}

