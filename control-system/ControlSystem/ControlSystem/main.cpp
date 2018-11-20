//
//  main.cpp
//  ControlSystem
//
//  Created by Subhabrata Ganguli on 11/17/18.
//  Copyright © 2018 Personal. All rights reserved.
//


#include "controls.hpp"
#include <fstream>


int main() {
    
    // state space matrices
    mat A, B, C, D;
    float w = 2.0;
    float z = 1.0;
    float k = 1.0;
    
    // state, input and output vectors
    mat x0, x, xdot, y, u;
    mat xdot_t;

    // time vector
    float t0 = 0;
    float tf = 10;
    float dt = 0.02;
    vec t;
    t = tvec(t0,tf,dt);
    
    SystemOrder2 sys;
    sys.set_ss(w,z,k);
    sys.get_ss(A,B,C,D);
    sys.get_simstep(t,x0,x,xdot,y);
    sys.outputfile(x);

    //x.print();
    
    /*
    ofstream myFileIn("x.dat", ios::app);
    if (myFileIn.is_open())
    {
        for (int i=0; i<5; i++)
            myFileIn << t(i) << " " << x(i,0) << " " << x(i,1) << endl;
        myFileIn.close();
    }
     */
    
    return 0;
}
