/*
 *  题目：有1，2，3，4数字，能组成多少个互不重复的三三位数？全部输出
 * /
#include <stdio.h>

int main()
{
    int i, j, k, count=0;
    printf("\n");
    for(i=1; i<5; i++){
        for(j=1; j<5; j++){
            for(k=1; k<5; k++){
                if (j!=k && i!=j && j!=k){
                    printf("%d%d%d\n", i, j, k);
                    count++;
                }
            }
        }
    }
    printf("count is %d\n", count);

}
