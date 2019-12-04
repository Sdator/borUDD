void main()
{// Update script for displaying different HP color from each player based on char name
    void P1 = getplayerproperty(0, "entity");
    void P2 = getplayerproperty(1, "entity");
    void Bar = getglobalvar("Bar");
    void Bar2 = getglobalvar("Bar2");
    void Bar3 = getglobalvar("Bar3");
    char P1name = getentityproperty(P1, "defaultname");
    char P2name = getentityproperty(P2, "defaultname");

    if(openborvariant("in_level")==1){
      if(P1 && P1name == "Billy"){
        int HP1 = getentityproperty(P1, "health");
        drawbox(26,9,HP1-3,10,999,rgbcolor(56,160,248),0);
        drawsprite(Bar, 1, 8, 2500);
      }else if(P1 && P1name == "Jimmy"){
        int HP1 = getentityproperty(P1, "health");
        drawbox(26,9,HP1-3,10,999,rgbcolor(246,130,130),0);
        drawsprite(Bar2, 1, 8, 2500);
      }else if(P1 && (P1name == "1jeff" || "Rash" || "Pimple" || "Raph" || "Mike" || "Leo" || "Don")){
        int HP1 = getentityproperty(P1, "health");
        drawbox(26,9,HP1-3,10,999,rgbcolor(41,220,113),0);
        drawsprite(Bar3, 1, 8, 2500);
      }

      if(P2 && P2name == "Billy"){
        int HP2 = getentityproperty(P2, "health");
        drawbox(156,9,HP2-3,10,999,rgbcolor(56,160,248),0);
        drawsprite(Bar, 131, 8, 2500);
      }else if(P2 && P2name == "Jimmy"){
        int HP2 = getentityproperty(P2, "health");
        drawbox(156,9,HP2-3,10,999,rgbcolor(246,130,130),0);
        drawsprite(Bar2, 131, 8, 2500);
      }else if(P2 && (P2name == "1jeff" || "Rash" || "Pimple" || "Raph" || "Mike" || "Leo" || "Don")){
        int HP2 = getentityproperty(P2, "health");
        drawbox(156,9,HP2-3,10,999,rgbcolor(41,220,113),0);
        drawsprite(Bar3, 131, 8, 2500);
      }
    }
}

void oncreate()
{
    void Bar;
    void Bar2;
    void Bar3;

    if(!Bar){
      Bar = loadsprite("data/sprites/bar.gif");
      Bar2 = loadsprite("data/sprites/bar2.gif");
      Bar3 = loadsprite("data/sprites/bar3.gif");
      setglobalvar("Bar", Bar);
      setglobalvar("Bar2", Bar2);
      setglobalvar("Bar3", Bar3);
    }
}

void ondestroy(){
    void Bar = getglobalvar("Bar");
    void Bar2 = getglobalvar("Bar2");
    void Bar3 = getglobalvar("Bar3");

    if(Bar){
      free(Bar);
      free(Bar2);
      free(Bar3);
      setglobalvar("Bar", NULL());
      setglobalvar("Bar2", NULL());
      setglobalvar("Bar3", NULL());
    }
}
