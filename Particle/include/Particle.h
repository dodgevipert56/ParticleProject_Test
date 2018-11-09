#ifndef PARTICLE_H_
#define PARTICLE_H_
#include "Vec3.h"
#include <cstring>

class Particle
{
public:
    Particle()=default;
    Particle(const Vec3 &_pos, const Vec3 &_dir, size_t _maxLife);
    ~Particle()=default;
    Particle(const Particle &)=default;
    Particle(Particle &&)=default;
    Particle & operator = (const Particle &)=default;
    Particle & operator = (Particle &&)=default;

    Particle (const Vec3 &_pos); // next time TBC!!
    Vec3 getPosition() const;
    void setPosition(const Vec3 &_pos);

    Vec3 getDirection() const;
    void setDirection(const Vec3 &_dir);

    size_t getLife() const;
    size_t getMaxLife() const;
    void setLife(size_t _life);
    //int getAddLife() const;
    //void setAddLife(int _aLife);

    Vec3 getColour() const;
    void setColour(const Vec3 &_colour);

    void update();
    void render() const;
    void reset();

private:
    Vec3 m_position;
    Vec3 m_dir;
    Vec3 m_colour = {0.0f, 0.0f, 0.0f};
    size_t m_life = 0;
    size_t m_maxLife;

    //int m_aLife = 0;
    //int maxLife = 100000;
    //Vec3 m_dir = {0.0f, 0.0f, 0.0f};
};

#endif
