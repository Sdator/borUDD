// 动态脚本里可以有自己的oncreate和ondestroy,里面的localvar,scriptvar是独立的.


void main()
{
    log("测试\n");
    // 加载音乐
    // int SFX = loadsample("data/sounds/1up.wav");
    // log("样本音乐："+SFX+"\n");
    // 播放音乐
    // playsample(SFX, 0, 60, 60, 100, 0);
    void t;
    void vself = getlocalvar("self");
    int r = getentityproperty(vself, "rush_count");
    log(t + ";" + vself + ";" + r + "\n");
    

}

void ondestroy()
{
    log("死了");
}

void oncreate()
{
    log("创建");
}



// 预定义脚本主要功能
// void main（）{}
// 这是每个脚本的主要功能。main（）是主调用者
// void ondestroy（）{}
// 在update.c / updated.c脚本或ondrawscript / updatescript / script事件中很有用。
// 当实体被杀死时，或者在关闭引擎时位于update.c / updated.c中时，将调用此函数。
// 例如，使用此功能可以释放数组/精灵
// void oncreate（）{}
// 在update.c / updated.c脚本或ondrawscript / updatescript / script事件中很有用。
// 创建实体时或启动引擎时在update.c / updated.c中调用此函数。
// 例如，使用此功能初始化您的var