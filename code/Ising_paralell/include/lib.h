#pragma once

#include <iostream>
#include <cmath>
#include <fstream>
#include <random>
#include <iomanip>
#include <cstdlib>
#include <armadillo>
#include <string>
#include <vector>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <mpi.h>

using namespace std;
using namespace arma;

void initialize(int, double, mat &, double&, double&);
void Metropolis(int L, long & idum, mat & spin, double & E, double & M, vec Ediff, ofstream & file2, int &cycles, int&sum, int mcs);
void input(int&, int& , double&, double&, double&);
void output(int, int, double,  ofstream & file, double, double, double, double, double);
int periodic_boundary_conditions(int, int, int);
void initialize_random(int L, double T, mat & spin, double & E, double & M);
