#include <cmath>
#include "Reference.h"

class Mover : Component{
    
    protected:
        float speed;
    
    public:

        enum Direction{
            UP = 0,
            RIGHT = 1,
            DOWN = 2,
            LEFT = 3
        };

        Mover();

        void Move();
        void Turn(Direction d);

        bool CanTurn(Direction d);
        bool CanMoveTo(float newX, float newY);
        float xCoord, yCoord;
        Direction directionFacing;
    
};





class PacMan : Mover{

    private:
    
};

class Ghost : Mover{
    
    public:
        enum ChaseStatus{
            IN_CAGE = 0,
            PURSUE = 1,
            PATROL = 2,
            CRUISE_ELROY = 3
        };

        ChaseStatus status;
        float pacOffsetX, pacOffsetY;
};