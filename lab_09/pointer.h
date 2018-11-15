#pragma once

#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Coord3D{
  double x;
  double y;
  double z;

};

struct Particle{
  double px;
  double py;
  double pz;

  double pvx;
  double pvy;
  double pvz;
  
};

double length(Coord3D *p);
Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2);
void move(Coord3D *ppos, Coord3D *pvel, double dt);
Coord3D* createCoord3D(double x, double y, double z);
void deleteCoord3D(Coord3D *p);

  Particle* createParticle(double x, double y, double z, double vx, double vy, double vz);

// set its velocity to (vx, vy, vz)
void setVelocity(Particle *p, double vx, double vy, double vz);
// get its current position
Coord3D getPosition(Particle *p);
// update particle's position after elapsed time dt
void move(Particle *p, double dt);
// delete all memory allocated for the particle passed by pointer
void deleteParticle(Particle *p);
