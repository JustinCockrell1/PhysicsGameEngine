#include<assert.h>
#include<cyclone/particle.h>

using namespace cyclone;

void Particle::integrate(real duration)
{
    assert(duration>0.0);

    position.addScaledVector(velocity, duration);

    Vector3 resultingAcc = acceleration;

    resultingAcc.addScaledVector(resultingAcc, duration);

    velocity *= pow(damping,duration);
}