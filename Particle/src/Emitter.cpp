#include <iostream>
#include <Emitter.h>
#include "Vec3.h"
#include <random>

size_t Emitter::getNumParticles() const
{
    return m_numParticles;
}

Emitter::Emitter(const Vec3 &_pos, size_t _numParticles)
{
    m_pos = _pos;
    m_numParticles = _numParticles;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<float> dis(-1.0f, 1.0f);
    std::uniform_int_distribution<size_t> life(5, 1000);

    for(size_t i =0; i<_numParticles; ++i)
    {
        m_particles.push_back(Particle(_pos, Vec3(dis(gen), dis(gen), dis(gen)), life(gen)));
    }
}

void Emitter::update()      // is mutable
{
    for(auto &p : m_particles)
        p.update();
}

void Emitter::render() const  // doesnt modify
{
    for(auto &p : m_particles)
        p.render();
}
