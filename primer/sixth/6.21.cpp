int bigger(const int n,const int * p)
{
    if(n>*p)
    return n;
    else
    return *p;
}

void changep(int ** p1, int ** p2) {
    int *temp = *p1;  // 解引用获取main函数中的指针
    *p1 = *p2;        // 修改main函数中的第一个指针
    *p2 = temp;       // 修改main函数中的第二个指针
}