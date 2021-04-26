/*全排列代码思路：
    - 假设函数功能已经实现 名字叫做generateP()， 递归层的接口 需要一个变量来标记层数定为index 和最大层数 num(可以用全局变量)
    当层数达到 边界 执行操作
    - 设置边界
    - 问题： index 如何赋空回到 1 ？
*/
#include<cstdio>
#include<cstdlib>
#define N 11

const int num = 3;
bool hashTable[N] = { false };
int path[N];
void generateP(int index);

int main() {
    generateP(1);
    //函数功能 实现输出
    
    system("pause");
    return 0;
}
//为每一位分配元素 分配完之后就在标记数组中修改使用情况
void generateP(int index) {
    if (index == num + 1) {
        for (int i = 1; i <= num; ++i) {
            printf(" %d", path[i]);
        }
        printf("\n");
        return ;
    }
    else {
        //按照字典序列依次分配元素 枚举元素 如果元素没有被使用过那么就 在路径数组path中填入x 并标记
        //继续处理下一位 
        for (int x = 1; x <= num; ++x) {                 
            if (hashTable[x] == false) {
                path[index] = x;
                hashTable[x] = true;
                generateP(index + 1);
                //该层的子问题已经处理完毕  接下来处理同层的其他情况 不断为当前的index位分配元素
                //往上是index 往下也是index 中间才是index +　1
                //已经处理完P[index] = x 还原 x的状态为未使用 从这一层退出的时候 表示其前面的子问题已经解决
                //递归函数之后就是一个回溯 再重新下一层递归的的问题

                hashTable[x] = false;
            } 
        }
        
    }

}
