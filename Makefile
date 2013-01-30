# for profiling:
#CFLAGS		=-Wall -O3 -g -fno-inline -pg -lm
# for performance:
CFLAGS		=-Wall -O3 -lm
# for debugging:
#CFLAGS		=-Wall -g -fno-inline -lm

# same flags for C++ as for C:
CXXFLAGS	=$(CFLAGS)

PROGRAMS	=nbody_sh1 nbody_mpi starter 

all:		programs 

programs:	$(PROGRAMS)

starter:	starter.c

nbody_sh1:	nbody_sh1.C

nbody_mpi:	nbody_mpi.C
		mpiCC $(CXXFLAGS) nbody_mpi.C -o nbody_mpi

clean:
		rm -f gmon.out gmon_*.txt $(PROGRAMS) starter evolve_*.txt start_10.txt