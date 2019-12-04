void main()
{
    void self = getlocalvar("self");
    void Dir = getentityproperty(self, "direction");
    void vAniID = getentityproperty(self,"animationID");
    void wallt = getlocalvar("type");
    int iPIndex = getentityproperty(self,"playerindex");
    void iJump = playerkeys(iPIndex, 1, "jump");
    void vSpawn;
    int SFX = loadsample("data/sounds/beatu.wav");
    int x = getentityproperty(self, "x");
    int y = getentityproperty(self, "a");
    int z = getentityproperty(self, "z");
    int b = getentityproperty(self, "base");

    if(wallt==1){
      if(vAniID != openborconstant("ANI_FALL80")){
        clearspawnentry();
        setspawnentry("name", "Bflash");
        vSpawn = spawn();
        changeentityproperty(vSpawn, "position", x-5, z+2, y+51);
        changeentityproperty(vSpawn, "direction", Dir);
        spawn();
        damageentity(self, self, 10, 1, openborconstant("ATK_NORMAL"));
        changeentityproperty(self, "direction", 0);
        tossentity(self, 1.3, 0.8, 0);
        playsample(SFX, 0, 60, 60, 100, 0);
      }
    }else if(wallt==2){
      if(vAniID != openborconstant("ANI_FALL80")){
        clearspawnentry();
        setspawnentry("name", "Bflash");
        vSpawn = spawn();
        changeentityproperty(vSpawn, "position", x+5, z+2, y+51);
        changeentityproperty(vSpawn, "direction", Dir);
        spawn();
        damageentity(self, self, 10, 1, openborconstant("ATK_NORMAL"));
        changeentityproperty(self, "direction", 1);
        tossentity(self, 1.3, -0.8, 0);
        playsample(SFX, 0, 60, 60, 100, 0);
      }
    }else if(wallt!=3){
      if(vAniID == openborconstant("ANI_JUMP") || vAniID == openborconstant("ANI_FORWARDJUMP") || vAniID == openborconstant("ANI_RUNJUMP")){
        if(iJump && y > b+15 && Dir == 1){
          changeentityproperty(self, "direction", 0);
          changeentityproperty(self, "animation", openborconstant("ANI_FOLLOW50"));
        }else if(iJump && y > b+15 && Dir == 0){
          changeentityproperty(self, "direction", 1);
          changeentityproperty(self, "animation", openborconstant("ANI_FOLLOW50"));
        }
      }
    }
}