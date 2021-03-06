#ifndef DOTMOVER_H
#define DOTMOVER_H

#include "Mover.h";
#include "Vector.h";
#include "FrameContext.h";

class DotMover : public Mover
{
public:
    DotMover();
    Vector location;
    Vector velocity;
    Vector acceleration;
    void update(FrameContext frameContext);
    void draw(FrameContext frameContext);
    void applyForce(const Vector &force);
};

#endif