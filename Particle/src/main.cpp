#include <iostream>
#include "Particle.h"
#include "Emitter.h"
int main()
{
    //here we are creating a particle
    std::cout << "Particle Main\n";
    //Particle p({0,0,0}, {0.0f, -0.1f, 0.0f}, 20);
    Emitter e({0,0,0},10);
    //p.setAddLife(1);

    //while (true)
    for(size_t i = 0; i<1000; ++i)
    {
        e.render();
        e.update();
    }
}




/*

bool simulation = true;
int i = 0;

while(simulation)   // infinitely updates
{
    if(i>=p.getMaxLife())
    {
        //p.setPosition({0.0f, 0.0f, 0.0f});
        //p.setLife(0);
        std::cout << "simming reset" << std::endl;

        p.reset();
        p.render();

        // dont use update, cause itll set everything to 0 then add because its updating +=

        simulation = false;

        std::cout << "end" << std::endl;
    }
    else
    {
        std::cout << "simming" << '\n';

        p.update();
        p.render();
    }

    i++;

*/
