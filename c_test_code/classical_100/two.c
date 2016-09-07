/*
 * 企业发放的奖金根据利润提成。利润(I)低于或等于10万元时，
 * 奖金可提10%；利润高于10万元，低于20万元时，低于10万元
 * 的部分按10%提成，高于10万元的部分，可可提成7.5%；20万
 * 到40万之间时，高于20万元的部分，可提成5%；40万到60万
 * 之间时高于40万元的部分，可提成3%；60万到100万之间时，
 * 高于60万元的部分，可提成1.5%，高于100万元时，超过100万
 * 元的部分按1%提成，从键盘输入当月利润I，求应发放奖金总数？
 */

#include <stdio.h>

int main()
{
    double i;
    int base_num = 10000;
    double bonus1, bonus2, bonus4, bonus6, bonus10, bonus;

    printf("你的净利润是：\n");
    scanf("%lf", &i);

    bonus1 = base_num * 0.1;
    bonus2 = bonus1 + base_num * 0.075;
    bonus4 = bonus2 + base_num * 2 * 0.05;
    bonus6 = bonus4 + base_num * 2 * 0.03;
    bonus10 = bonus6 + base_num * 4 * 0.015;

    if (i <= base_num){
        bonus = i * 0.1;
    } else if (i <= base_num * 2){
        bonus = bonus2 + (i - base_num) * 0.075;
    }else if (i <= 4*base_num){
        bonus = bonus4 + (i-2*base_num)*0.05;
    }else if (i <= 6*base_num){
        bonus = bonus4 + (i - 4*base_num)*0.03;
    }else if (i <= 10*base_num){
        bonus = bonus6 + (i - 6*base_num)*0.015;
    }else if (i > 10*base_num){
        bonus = bonus10 + (i - 10*base_num);
    }
    printf("提成为：bonus=%lf\n", bonus);
}
