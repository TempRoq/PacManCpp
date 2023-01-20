#include "PacMan.h"
#include <cmath>
#include "Level.h"


void Mover::Move(){
    switch (this->directionFacing) {
        case Mover::UP:
            if (CanMoveTo(this->xCoord, this->yCoord + (speed * Reference::updateRate)))
            break;
        
        case Mover::DOWN:
            if (CanMoveTo(this->xCoord, this->yCoord - (speed * Reference::updateRate)))
            break;
        
        case Mover::RIGHT:
            if (CanMoveTo(this->xCoord + (speed * Reference::updateRate), this->yCoord))
            break;   
        
        case Mover::LEFT:
            if (CanMoveTo(this->xCoord + (speed * Reference::updateRate), this->yCoord))
            break;
    }

}

void Mover::Turn(Mover::Direction d){
    if (CanTurn(d)){
        this->xCoord = round(this->xCoord);
        this->yCoord = round(this->yCoord);
    }
    this->directionFacing = d;
}

bool Mover::CanMoveTo(float newX, float newY){ //FIX ME FURTHER
    if (Level::instance.stageLayout[int(round(newX))][int(round(newY))] != Level::WALL){
        return true;
    }
    return false;
}

bool Mover::CanTurn(Mover::Direction d){
    int x = round(this->xCoord);
    int y = round(this->yCoord);

    if (d == directionFacing){
        return false;
    }

    switch (d) {
        case (UP):
            return Level::instance.stageLayout[x][y+1] != Level::WALL;
            break;
        case (DOWN):
            return Level::instance.stageLayout[x][y-1] != Level::WALL;
            break;
        case (LEFT):
            return Level::instance.stageLayout[x-1][y] != Level::WALL;
            break;
        case (RIGHT):
            return Level::instance.stageLayout[x+1][y] != Level::WALL;
            break;
    }
}