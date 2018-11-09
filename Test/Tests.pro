TARGET = ParticleTests
SOURCES += main.cpp \
           ../Particle/src/Particle.cpp \ #linker error without it
           ../Particle/src/Emitter.cpp

LIBS += -lgtest
INCLUDEPATH += ../Particle/include
#QMAKE_CXX = clang++

cache()
