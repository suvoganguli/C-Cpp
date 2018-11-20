//
//  controls.hpp
//  ControlSystem
//
//  Created by Subhabrata Ganguli on 11/17/18.
//  Copyright © 2018 Personal. All rights reserved.
//


#include <iostream>
#include <armadillo>

using namespace std;
using namespace arma;

// Declarations
vec tvec(float t0, float tf, float dt);

class SystemOrder2
{
private:
    mat A, B, C, D;
    const int NX=2, NY=1, NU=1;
    int NT;
    mat x, xdot, u, y, xdot_t;
    vec t;
    
public:
    SystemOrder2()
    {
        A.set_size(0,0);
        B.set_size(0,0);
        C.set_size(0,0);
        D.set_size(0,0);
        
        NT = 1;
        x.set_size(NT,NX);
        xdot.set_size(NT,NX);
        u.set_size(NT,1);
        y.set_size(NT,1);
        xdot_t.set_size(1,NX);
        
        
    }
    void set_ss(float w, float z, float k)
    {
        A.set_size(NX,NX);
        B.set_size(NX,NU);
        C.set_size(NY,NX);
        D.set_size(NY,NU);
        
        A << 0 << 1 << endr
        << -w*w << -2*z*w << endr;
        
        B << 0 << endr
        << w*w << endr;
        
        C << k << 0 << endr;
        
        D << 0 << endr;
    }
    
    void get_ss(mat& Aout, mat& Bout, mat& Cout, mat& Dout)
    {
        Aout = A;
        Bout = B;
        Cout = C;
        Dout = D;
    }
    
    void get_simstep(vec& tIn, mat x0, mat& xIn, mat& xdotIn, mat& yIn)
    {
        const float DT = 0.02; //t(2,1)-t(1,1);
        t = tIn;
        NT = (int) tIn.n_rows;

        // state vector and input vector
        xIn.set_size(NT, NX);
        xdotIn.set_size(NT,NX);
        yIn.set_size(NT, NY);
        u.set_size(NT,NU);
        u.fill(1);
        
        xdot_t.set_size(NX,1);
        
        // initialization
        x.fill(0);
        xdot.fill(0);
        y.fill(0);
        
        // step
        for (int i=0; i<NT; i++)
        {
            xdot_t = A*xIn.row(i).t() + B*u.row(i);
            xdotIn.row(i) = xdot_t.t();
            
            if (i<NT-1)
            {
                x.row(i+1) = x.row(i) + DT*xdot.row(i);
            }
        }
        
    }
    
    void outputfile(mat x)
    {
        // output file
        ofstream myFileIn("x.dat", ios::out);
        
        //cout << S(0,0);
        //cout << x.row(0);
        if (myFileIn.is_open())
        {
            for (int i=0; i<5; i++)
            {
                //myFileIn << t(i) << " " << x(i,0) << " " << x(i,1) << endl;
                myFileIn << t(i) << " " << endl;
                //cout << x(i,0) << endl;
            }
            myFileIn.close();
        }
    }

};

/*
 // output file
 ofstream myFileIn("x.dat", ios::app);
 if (myFileIn.is_open())
 {
 for (int i=0; i<NT; i++)
 myFileIn << t(i) << " " << x(i,0) << " " << x(i,1) << endl;
 myFileIn.close();
 }
 
 */


// Definitions
vec tvec(float t0, float tf, float dt)
{
    int nt = (int) (tf-t0)/dt;
    
    vec t(nt+1);
    
    for (int i = 0; i<nt+1; i++)
    {
        t(i) = t0+dt*i;
    }
    
    return t;
}

