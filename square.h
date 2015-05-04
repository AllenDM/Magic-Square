//
//  square.h
//  Magic Square
//
//  Created by Allen Moody on 9/10/14.
//  Copyright (c) 2014 FAMU. All rights reserved.
//

#ifndef Magic_Square_square_h
#define Magic_Square_square_h
// Allen Moody
// Prog 1 Magic Square
using namespace std;

  class square{
      
      
      
  private:
        int k;
        int r;
        int i;
        int j;
        int squareArray[3][3];
        int index =0;
        int r1 =0;
        int r2 =0;
        int r3 =0;
        int c1 =0;
        int c2 =0;
        int c3 =0;
        int d1 =0;
        int d2 =0;
        int sum =0;
        int squareTotal =0;
      
      public:
      square(int vals[]){
          
          for (i=0;i<3;i++)
        {
            for (j=0; j<3; j++) {
                squareArray[i][j]=vals[index];
                index++;
            }
        }
      }

    
    
    
    
    bool isMagic()
      {
          
          // Row checker
        for (k=0;k<3;k++)
        {
            for (r=0;r<3;r++)
            {
                
                if (k==0){
                    r1 += squareArray[k][r];
                    sum+= squareArray[k][r];
                }
                else if(k==1)
                    r2 += squareArray[k][r];
                
                else if (k==2)
                    r3 += squareArray[k][r];
                
                }
            
           }
          
          
            // Column checker
          for (r=0; r<3; r++) {
              
              for (k=0; k<3; k++){
                  
                  
                  if (r==0)
                      c1 += squareArray[k][r];
                  else if(r==1)
                      c2 += squareArray[k][r];
                  
                  else if (r==2)
                      c3 += squareArray[k][r];
              }
              
          }
          
          // Major Diagonal checker
          for (r=0; r<3; r++) {
              
              for (k=0; k<3; k++){
                  
                  
                  if (k==r)
                      d1 += squareArray[k][r];
                  
              }
              
          }
          
          // Minor Diagonal checker
          
          k=0;
              for (r=2; r>=0; r--){
                
                  d2 += squareArray[k][r];
                  k++;
              }
              
        
          
          squareTotal = r1+r2+r3+c1+c2+c3+d1+d2;
          if(sum == squareTotal/8){
              return true;}
          
          
        return false;
    }
    
    
    
    
    
};










#endif
