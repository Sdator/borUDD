void main(){
    log("111");
}

void test01(){
    void self = getlocalvar("self");
    log("test22222222:" + self);

}


int = openborvariant("models_cached");
int iSel;
char cName;
//循环判断所有已经被缓存的模型
for (i = 0; i < openborvariant("models_cached"); i++) {
    //得到模型的名称
    cName = getmodelproperty(i, 1);
    //得到模型是否可以被选择的标志
    iSel = getmodelproperty(i, 4);
    //如果模型的名称以0结尾的，那么就令这个模型不可以被玩家选择。
    if (strright(cName, 1) == "0") { changemodelproperty(i, 4, 0); }
}