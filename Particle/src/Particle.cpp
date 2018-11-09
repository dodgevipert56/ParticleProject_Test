#include "Particle.h"
#include <iostream>

Vec3 Particle::getPosition() const
{
    return m_position;
}

Vec3 Particle::getDirection() const
{
    return m_dir;
}

Particle::Particle(const Vec3 &_pos, const Vec3 &_dir, size_t _maxLife) :
                   m_position(_pos), m_dir(_dir),m_maxLife(_maxLife) // ctor initialisation list
{

}

size_t Particle::getMaxLife()const
{
    return m_maxLife;
}

void Particle::setPosition(const Vec3 &_pos)
{
    m_position = _pos;
}

size_t Particle::getLife() const  // getting the life which stores
{
    return  m_life;
}

void Particle::setLife(size_t _life)
{
    m_life = _life;
}

/*
int Particle::getAddLife() const   // getting the add on life
{
    return m_aLife;
}

void Particle::setAddLife(int _aLife)
{
    m_aLife = _aLife;
}

*/

Vec3 Particle::getColour() const
{
    return m_colour;
}

void Particle::setColour(const Vec3 &_colour)
{
    m_colour = _colour;
}


void Particle::setDirection(const Vec3 &_dir)
{
    m_dir = _dir;
}

/*
void Particle::reset()
{

    m_position.x = 0;
    m_position.y = 0;
    m_position.z = 0;

    m_life = 0;

    setPosition({0,0,0});  // {} because its a vector
    setLife(0);
}
*/

void Particle::update()
{
    /*
    m_life += m_aLife;
    */
    m_position += m_dir;
    //m_life++;
    if(++m_life >= m_maxLife) // same as m_life++ or ++m_life
    {
        //reset
        m_position = Vec3(0.0f, 0.0f, 0.0f);
        m_life = 0;
    }

}

void Particle::render() const
{
    std::cout << m_position.x << ' ' << m_position.y << ' ' << m_position.z << '\n';
    std::cout << m_life << '\n';
}


