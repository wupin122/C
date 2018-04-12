#include <stdio.h>
enum sex {male, female};
enum season {spring, summer, fall, winter};
enum sex select_s(void)
{
    int tmp;
    do {
        printf("0...男  1...女:");
        scanf("%d", &tmp);
    } while (tmp < male || tmp > female);
    return (tmp);
}
enum season select_ss(void)
{
    int tmp;
    do {
        printf("0...春季  1...夏季  2...秋季  3...冬季:");
        scanf("%d", &tmp);
    } while (tmp < spring || tmp > winter);
    return (tmp);
}
int main(void)
{
    if (select_s())
        printf("选择的性别是：女性\n");
    else
        printf("选择的性别是：男性\n");
    switch (select_ss()) {
        case 0 : printf("选择的季节是：春季\n"); break;
        case 1 : printf("选择的季节是：夏季\n"); break;
        case 2 : printf("选择的季节是：秋季\n"); break;
        case 3 : printf("选择的季节是：冬季\n"); break;
    }
    return (0);
}
