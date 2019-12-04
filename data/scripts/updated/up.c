void prepareScript()
{
        void snumber        =        0;
        void sh;
        void i=0;
        /***********************************
                        Register Scripts Here
        ***********************************/
        void file=openfilestream("data/scripts/updated/s"+i+".c");
        // log("句柄"+file+"\n");
        // log("路径：data/scripts/updated/s"+i+".c\n");
        
        while(file!=-1)
        {
                snumber++;
                i++;
                closefilestream(file);
                file=openfilestream("data/scripts/updated/s"+i+".c");
        }
        if(snumber)
        {
                sh=array(snumber);
                //
                for(i=0;i<snumber;i++)
                {
                        set(sh,i,allocscript("script"+i));
                        loadscript(get(sh,i),"data/scripts/updated/s"+i+".c");
                        compilescript(get(sh,i));
                }
                setlocalvar("script",sh);
        }
}

void execs()
{
        void s,i;
        s=getlocalvar("script");
        if(!s)return;
        for(i=0;i<size(s);i++)
        {
                executescript(get(s,i));
        }
}
void frees()
{
        void s=getlocalvar("script");
        if(s)free(s);
}