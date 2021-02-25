# coding: UTF-8
# WWWDOT-GOOGLE=DOTCOM.py

import itertools
from time import time

def main():
    tm = time ()      # Timer Start

    P = range(10)
    cnt = 0
    for p in itertools.permutations(P,9):
        W,D,O,T,G,L,E,C,M = p
        if W*G*D==0: continue
        if G+D!=W and G+D+1!=W: continue
        if (E+M)%10!=T: continue
        
 
        cnt += 1 
        print ( "[% d]" % cnt)
        print ( "WWWDOT% s" % WWWDOT)
        print ( "-GOOGLE% s" % GOOGLE)
        print ( "-------" )
        print ( "DOTCOM% s" % DOTCOM)

    print("Runtime : %.3f [sec]"%(time()-tm))   # Timer Stop & Disp

if __name__ == '__main__':
    main()