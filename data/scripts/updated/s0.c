// 动态脚本里可以有自己的oncreate和ondestroy,里面的localvar,scriptvar是独立的.


void main()
{
    log("测试\n");
    // 加载音乐
    // int SFX = loadsample("data/sounds/1up.wav");
    // log("样本音乐："+SFX+"\n");
    // 播放音乐
    // playsample(SFX, 0, 60, 60, 100, 0);
    // 获取缓冲物体对象熟练
    // int a = openborvariant("models_cached");
    // log("数量:" + a + "\n");
    // void self = getlocalvar("self");
    // log("自身:" + self + "\n");
    // void self = getglobalvar("Billy");
    // void selfa = getlocalvar("Billy");
    // log("\n自身：" + self + ";"+ selfa );
  

    // //玩家积分  获取第一个玩家 索引从0开始
    // int self = getplayerproperty(0,"score");
    // //玩家命数
    // int lives = getplayerproperty(0,"lives");
    // //多少玩家正在游戏
    // int players = openborvariant("count_players");
    // 获取第一个玩家的实例
    void self = getplayerproperty(0,"ent");

    void aa = loadmodel("Billy");
    void bb = getentityproperty(aa,"mp");

    //物体
    void name = getentityproperty(self,"mp");
    void x = getentityproperty(self,"mpdroprate");
    void z = getentityproperty(self,"mprate");
    // void hp = getentityproperty(self, "mpset");
    // void mp1 = getentityproperty(self,"mpstable");
    // void mp2 = getentityproperty(self, "mpstableval");
    changeentityproperty(self,"mp",100);

    // drawstring (x+10, 20+z, 1, "11111111111111"+name);
    
    log( "1:" + name + "\n");
    log( "2:" + x + "\n");
    log( "3:" + z + "\n");
    log( "aa:" + aa + "\n");
    log( "bb:" + bb + "\n");
    // log( "4:" + hp + "\n");
    // log( "5:" + mp1 + "\n");
    // log( "6:" + mp2 + "\n");



  
    // int i;
    // for(i=0; i<a; i++)
    // {
    //     // 获取模型的名字
    //     void e = getscriptvar(i);
    //     // void cName = getentityproperty(i,"name");
    //     // log(i + ":" + cName + "\n");
    //     log(i + ":" + e + "\n");
    // }
    // char a = getindexedvar(99); 
    // char b = getentityvar(1); 
    // log( "测试a:" + getlocalvar(2) + "\n");
    // log( "测试b:" + b + "\n");



    // log( "物体:" + getentityproperty(a,"name") + "\n");


    // log( "玩家名字:" + name + "\n");
    // log( "玩家x:" + x + "\n");
    // log( "玩家HP:" + hp + "\n");
    // // log("得分:" + self + "\n");
    // log("lives:" + lives + "\n");
    // log("玩家数量:" + players + "\n");

    // drawstring (10, z + 20 , 3, "name" + name); 

}

// 脚本初始化时执行一次
// 全局变量可以访问 局部变量无法访问
void oncreate(){
    log("22222222222222\n");
    // setscriptvar(1,"hahahah");      //脚本变量 不行 从OpenBOR版本3.902开始弃用了
    setindexedvar(99, "helloaaa");  //全局可以
    setlocalvar(2,"mmmmmmmmmm");    //局部可以

    int aaa = 10086;
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