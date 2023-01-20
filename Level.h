class Level{
   
    Level();

    public:
        enum LayoutValue{
            
            NOTHING = 0,
            PELLET = 1,
            POWER_PELLET = 2,
            FRUIT = 3,
            WALL = 4
        };

        enum LayoutPrefs{
            NONE,
            PAC_CANT,
            GHOST_AVOID,
            GHOST_SLOW,
            TELEPORT,
            FRUIT_SPAWN,
            GHOST_TARGET_B,
            GHOST_TARGET_P,
            GHOST_TARGET_I,
            GHOST_TARGET_C,
        };

        
        int FruitSpawnX, FruitSpawnY;
        int stageNum;
        int numPelletsRemaining;
        LayoutValue** stageLayout;
        LayoutPrefs** spacePrefs;

        static Level instance; //Quick use of singleton. When creating a level, just set the instance to be this so anyone can access it immediately.

};