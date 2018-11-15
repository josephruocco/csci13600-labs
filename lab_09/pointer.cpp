#include "pointer.h"

double length(Coord3D *p)
{
  
  double len  = sqrt( (p->x * p->x) + (p->y*p->y) + (p->z*p->z) );
  return len;

}

Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){

  double p_dist = length(p1);
  double q_dist = length(p2);

  if(p_dist < q_dist)
    return p2;
  return p1;

}


void move(Coord3D *ppos, Coord3D *pvel, double dt){
  // v = d/t
  ppos->x = ppos->x + pvel->x * dt;
  ppos->y = ppos->y + pvel->y * dt;
  ppos->z = ppos->z + pvel->z * dt;

}


Coord3D* createCoord3D(double x, double y, double z){

  Coord3D* p  = new Coord3D;

  *p = {x, y, z};
  
  return p;

}

void deleteCoord3D(Coord3D *p){
  delete p; 
}

Particle* createParticle(double x, double y, double z, 
			   double vx, double vy, double vz)
    {
      Particle* p = new Particle;

      *p = {x, y, z, vx, vy, vz};
     
      return p;
   }
  // set its velocity to (vx, vy, vz)

void setVelocity(Particle *p, double vx, double vy, double vz){
  
  p->pvx = vx;
  p->pvy = vy;
  p->pvz = vz;

}
  // get its current position
Coord3D getPosition(Particle *p){
  Coord3D q = {p->px, p->py, p->pz};
    return q;
  }
  // update particle's position after elapsed time dt
void move(Particle *p, double dt){
     p->px = p->px + p->pvx * dt;
     p->py= p->py + p->pvy * dt;
     p->pz = p->pz + p->pvz * dt;
  }
  // delete all memory allocated for the particle passed by pointer
void deleteParticle(Particle *p){
    delete p; 
  }

