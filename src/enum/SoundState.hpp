#pragma once

enum SoundState {
    //PARAMETERS
    BIOME_PARAMETER = 0,
    TIME_PARAMETER  = 1,

	//ENEMIES
	STANDBY_SOUND	= 0,
	OFFENSIVE_SOUND	= 1,
	DEFENSIVE_SOUND	= 2,

	//DEFAULT
    DEAD_SOUND 		= 10,
    STOP_SOUND		= 11,

    //PLAYER
    PLAYER_SOMERSOULT   = 8,
    PLAYER_INJURED      = 9,
    ATTACKING_MELEE     = 7,


    //PLAYER ACTIONS
    PRESS_F_SOUND       = 1,
    PRESS_F_BAD_SOUND   = 2,
    LEVEL_UP_SOUND      = 3,
    CHANGE_WEAPON_SOUND = 4,
    OPEN_MAP_SOUND      = 5,
    EQUIP_WEAPON_SOUND  = 6,

};