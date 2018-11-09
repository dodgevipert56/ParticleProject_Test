#ifndef EMITTER_H
#define EMITTER_H
#include <vector>
#include "Particle.h"


class Emitter
{
    public :
        Emitter() = default;
        Emitter(const Vec3 &_pos, size_t _numParticles);
        Emitter (const Emitter &) = delete;
        void render() const;
        void update();
        size_t getNumParticles() const;

    private:
        size_t m_numParticles = 0;
        std::vector<Particle> m_particles; // vector header
        Vec3 m_pos;
};

#endif
