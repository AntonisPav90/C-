# Antonios-Dionysios Pavlozas
# University of West-Attica
# Question 3

import itertools
from time import time

def main():
    tm = time ()      # Timer start

    P = range(0,10) # List (0,1,2,3,4,5,6,7,8,9)
    Q = range(1,10) # List (1,2,3,4,5,6,7,8,9)
    
    count = 0  # Counter for all possible solutions
    for q in itertools.permutations(Q,3):      # Permutations of the letters W,G,D
        W,G,D = q
        if G+D!=W and G+D+1!=W: continue       # Statement of the first equation
        R = list(set(P)-set(q))                # Create a list with unique number in each letter
        for p in itertools.permutations(R,6):  # Permutaions of the others letters 
            O,T,L,E,C,M = p                    
            if (E+M)%10!=T: continue           # Statement of the last equation
            WWWDOT = 100000 * W + 10000 * W + 1000 * W + 100 * D + 10 * O + T   # Decompose/Place values
            GOOGLE = 100000 * G + 10000 * O + 1000 * O + 100 * G + 10 * L + E 
            DOTCOM = 100000 * D + 10000 * O + 1000 * T + 100 * C + 10 * O + M
            if WWWDOT-GOOGLE!= DOTCOM: continue 
            # Display only those that have passed the check  
            count += 1 
            print()
            print ( "[%d] Solution" % count)
            print ()
            print ( "  WWWDOT (% s)" % WWWDOT)
            print ( "- GOOGLE (% s)" % GOOGLE)
            print ( "  ---------------" )
            print ( "  DOTCOM (% s)" % DOTCOM)

    print("  Runtime : %.3f [sec]"%(time()-tm))   # Timer stop & display

if __name__ == '__main__':
    main()


