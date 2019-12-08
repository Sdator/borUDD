// 脚本读入编译
void prepareScript()
{
        //用于记录找到的脚本数量
        void snumber        =        0;
        void sh;
        void i=0;
        /***********************************
                        Register Scripts Here
        ***********************************/
        // 打开文件 s0.c
        void file=openfilestream("data/scripts/updated/s"+i+".c");
        // log("句柄"+file+"\n");
        // log("路径：data/scripts/updated/s"+i+".c\n");
        //循环读取sx.c的文件直到找不到为止
        while(file!=-1)
        {
                // 脚本数量
                snumber++;
                i++;
                closefilestream(file);
                file=openfilestream("data/scripts/updated/s"+i+".c");
        }
        //
        if(snumber)
        {
                //创建数组
                sh=array(snumber);
                //迭代数组存值
                for(i=0;i<snumber;i++)
                {
                        // 给数组赋值 存放脚本的变量、别名
                        // set原本作用只有一个参数 用来设置游戏难度 这里是高级应用
                        set(sh,i,allocscript("script"+i));
                        // 加载文件脚本 并用 script0-xx 作为变量名
                        loadscript(get(sh,i),"data/scripts/updated/s"+i+".c");
                        // 编译脚本
                        compilescript(get(sh,i));
                }
                // 保存脚本别名到本地变量中
                setlocalvar("script",sh);
        }
}

//执行脚本
void execs()
{
        void s,i;
        s=getlocalvar("script");
        if(!s)return;
        for(i=0;i<size(s);i++)
        {
                //执行脚本
                executescript(get(s,i));
        }
}
//脚本释放
void frees()
{
        void s=getlocalvar("script");
        log("55555555555:"+s+"\n");
        if(s)free(s);
}