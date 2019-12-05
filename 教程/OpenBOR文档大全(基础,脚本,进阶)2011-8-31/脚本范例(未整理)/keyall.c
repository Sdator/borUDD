// Script for using 4 attack buttons.

void main(){

	// get variables ready
	int player = getlocalvar("player");
	void self = getplayerproperty(player, "ent");
	int anim = getentityproperty(self, "animationid");
	float a = getentityproperty(self, "a");
	float base = getentityproperty(self, "base");
	
	if(playerkeys(player, 1, "movedown") || playerkeys(player, 1, "moveleft") || playerkeys(player, 1, "moveup") || playerkeys(player, 1, "moveright"))
	{
		setindexedvar(player, openborvariant("elapsed_time"));
	}
	if((anim == openborconstant("ANI_IDLE") || anim == openborconstant("ANI_WALK") || anim == openborconstant("ANI_RUN")) && a == base  && (openborvariant("elapsed_time") - getindexedvar(player) >= 25 || !getindexedvar(player)))
	{
		if(playerkeys(player, 1, "attack2"))
		{
			changeentityproperty(self, "aiflag", "attacking", 1);
			changeentityproperty(self, "aiflag", "idling", 0);
			changeentityproperty(self, "takeaction", "common_attack_proc");
			changeentityproperty(self, "animation", openborconstant("ANI_ATTACK2"), 1);
			changeentityproperty(self, "velocity", 0, 0, 0);
		}
		if(playerkeys(player, 1, "attack3"))
		{
			changeentityproperty(self, "aiflag", "attacking", 1);
			changeentityproperty(self, "aiflag", "idling", 0);
			changeentityproperty(self, "takeaction", "common_attack_proc");
			changeentityproperty(self, "animation", openborconstant("ANI_ATTACK3"), 1);
			changeentityproperty(self, "velocity", 0, 0, 0);
		}
		if(playerkeys(player, 1, "attack4"))
		{
			changeentityproperty(self, "aiflag", "attacking", 1);
			changeentityproperty(self, "aiflag", "idling", 0);
			changeentityproperty(self, "takeaction", "common_attack_proc");
			changeentityproperty(self, "animation", openborconstant("ANI_ATTACK4"), 1);
			changeentityproperty(self, "velocity", 0, 0, 0);
		}
	}
	if(anim == openborconstant("ANI_JUMP"))
	{
		if(playerkeys(player, 1, "attack2"))
		{
			changeentityproperty(self, "animation", openborconstant("ANI_FOLLOW9"), 1);
		}
		else if(playerkeys(player, 1, "attack3"))
		{
			changeentityproperty(self, "animation", openborconstant("ANI_FOLLOW10"), 1);
		}
		else if(playerkeys(player, 1, "attack4"))
		{
			changeentityproperty(self, "animation", openborconstant("ANI_FOLLOW11"), 1);
		}
	}
	if(anim == openborconstant("ANI_FORWARDJUMP"))
	{
		if(playerkeys(player, 1, "attack2"))
		{
			changeentityproperty(self, "animation", openborconstant("ANI_FOLLOW12"), 1);
		}
		else if(playerkeys(player, 1, "attack3"))
		{
			changeentityproperty(self, "animation", openborconstant("ANI_FOLLOW13"), 1);
		}
		else if(playerkeys(player, 1, "attack4"))
		{
			changeentityproperty(self, "animation", openborconstant("ANI_FOLLOW14"), 1);
		}
	}
}

