#include "二叉树.c"

// 从小到大输出二叉排序树(先访问左子树 再访问根节点 再访问右子树)
void InOrderTraverse(BiTree T) {
    if (T) {
        InOrderTraverse(T->lchild);  // 先访问右子树
        printf("%d ", T->data);  // 访问根节点
        InOrderTraverse(T->rchild);  // 再访问左子树
    }
}

int main() {
    BiTree T = NULL;
    int a[] = { 20,15,10,18,25 };
    for (int i = 0; i < 5; i++) {
        InsertNode(&T, a[i]);
    }
    InOrderTraverse(T);
    return 0;
}