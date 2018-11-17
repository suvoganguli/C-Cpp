//
//  main.cpp
//  LinearAlgebra
//
//  Created by Subhabrata Ganguli on 11/16/18.
//  Copyright © 2018 Personal. All rights reserved.
//

#include <iostream>
#include <armadillo>

using namespace std;
using namespace arma;

int main()
{
    
    mat A(2,2), B(2,2), C(2,2);
    colvec d(2), e(2), p(2);
    rowvec q(2);
    
    A.eye();
    B.eye();
    p.fill(2);
    q.fill(3);
    
    C = A*B;
    d = C*p;
    e = C*q.t();
    
    A.print();
    B.print();
    C.print();
    d.print();
    e.print();
    
    cout << A.n_rows << endl;
    cout << A.n_cols << endl;

    
    A << 2 << 3 << endr
      << 4 << 5 << endr;
    
    A.print();
    
    A.set_size(2,3);
    A.fill(5);
    
    A.print();
    
    
    A << 0.165300 << 0.454037 << 0.995795 << 0.124098 << 0.047084 << endr
    << 0.688782 << 0.036549 << 0.552848 << 0.937664 << 0.866401 << endr
    << 0.348740 << 0.479388 << 0.506228 << 0.145673 << 0.491547 << endr
    << 0.148678 << 0.682258 << 0.571154 << 0.874724 << 0.444632 << endr
    << 0.245726 << 0.595218 << 0.409327 << 0.367827 << 0.385736 << endr;
    
    A.print();
    cout << endl;
    
    cout << "A(0:3,(1:2))" << endl;
    cout << A(span(0,3), span(1,2)) << endl << endl;
    
    A << 2 << 3 << endr
    << 4 << 5 << endr;
    
    A.print();
    cout << endl;
    
    // maximum from each column (traverse along rows)
    cout << "max in col" << endl;
    cout << max(A) << endl << endl;
    cout << "max in row" << endl;
    cout << max(A,1) << endl << endl;
    
    mat F = randn<mat>(4,4);
    F.print();
    
    rowvec r;
    r << 1 << 2;
    r.print();
    
    vec s;
    s << 3 << 4;
    s.print();
    
    
    
    
    
    
    
    
    
    
    return 0;
}
