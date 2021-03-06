#ifndef TETROMINO_H_INCLUDED        //          tetromino data and digits vector
#define TETROMINO_H_INCLUDED

class shape {
    public :
    int state = 0 ;
    pair<int,int> bp[4][4] ;  //cell , state
    double t_col[3] = {} ;
} SHP[8] ;              // [7] is not a tetromino , 1*1 square for testing

void state0(){
    SHP[0].bp[0][0] = {0,-1} ;
    SHP[0].bp[1][0] = {0,0} ;
    SHP[0].bp[2][0] = {0,1} ;
    SHP[0].bp[3][0] = {0,2} ;
    SHP[0].t_col[0] = 0.227  ;
    SHP[0].t_col[1] = 0.09412 ;
    SHP[0].t_col[2] = 0.686 ;

    SHP[1].bp[0][0] = {0,0} ;
    SHP[1].bp[1][0] = {1,0} ;
    SHP[1].bp[2][0] = {0,1} ;
    SHP[1].bp[3][0] = {1,1} ;
    SHP[1].t_col[0] = 0.0745  ;
    SHP[1].t_col[1] = 0.647 ;
    SHP[1].t_col[2] =  0.7098;

    SHP[2].bp[0][0] = {0,0} ;
    SHP[2].bp[1][0] = {0,1} ;
    SHP[2].bp[2][0] = {1,0} ;
    SHP[2].bp[3][0] = {1,-1} ;
    SHP[2].t_col[0] = 0.1098  ;
    SHP[2].t_col[1] = 0.7255 ;
    SHP[2].t_col[2] = 0.0588 ;

    SHP[3].bp[0][0] = {0,0} ;
    SHP[3].bp[1][0] = {0,-1} ;
    SHP[3].bp[2][0] = {1,0} ;
    SHP[3].bp[3][0] = {1,1} ;
    SHP[3].t_col[0] = 0.988;
    SHP[3].t_col[1] = 0.988 ;
    SHP[3].t_col[2] = 0.129 ;


    SHP[4].bp[0][0] = {0,0} ;
    SHP[4].bp[1][0] = {0,-1} ;
    SHP[4].bp[2][0] = {0,1} ;
    SHP[4].bp[3][0] = {-1,1} ;
    SHP[4].t_col[0] = 0.922  ;
    SHP[4].t_col[1] =  0.1961;
    SHP[4].t_col[2] = 0.9058 ;


    SHP[5].bp[0][0] = {0,0} ;
    SHP[5].bp[1][0] = {0,-1} ;
    SHP[5].bp[2][0] = {0,1} ;
    SHP[5].bp[3][0] = {1,1} ;
    SHP[5].t_col[0] = 0.5019 ;
    SHP[5].t_col[1] = 0.5019 ;
    SHP[5].t_col[2] = 0.5019 ;


    SHP[6].bp[0][0] = {0,-1} ;
    SHP[6].bp[1][0] = {0,0} ;
    SHP[6].bp[2][0] = {0,1} ;
    SHP[6].bp[3][0] = {1,0} ;
    SHP[6].t_col[0] = 1  ;
    SHP[6].t_col[1] = 0.5019 ;
    SHP[6].t_col[2] = 0 ;


}

void state1(){
    SHP[0].bp[0][1] = {0,0} ;
    SHP[0].bp[1][1] = {-1,0} ;
    SHP[0].bp[2][1] = {1,0} ;
    SHP[0].bp[3][1] = {2,0} ;

    SHP[1].bp[0][1] = {0,0} ;
    SHP[1].bp[1][1] = {1,0} ;
    SHP[1].bp[2][1] = {0,1} ;
    SHP[1].bp[3][1] = {1,1} ;

    SHP[2].bp[0][1] = {0,0} ;
    SHP[2].bp[1][1] = {-1,0} ;
    SHP[2].bp[2][1] = {0,1} ;
    SHP[2].bp[3][1] = {1,1} ;

    SHP[3].bp[0][1] = {0,0} ;
    SHP[3].bp[1][1] = {0,1} ;
    SHP[3].bp[2][1] = {-1,1} ;
    SHP[3].bp[3][1] = {1,0} ;

    SHP[4].bp[0][1] = {-1,0} ;
    SHP[4].bp[1][1] = {0,0} ;
    SHP[4].bp[2][1] = {1,0} ;
    SHP[4].bp[3][1] = {1,1} ;

    SHP[5].bp[0][1] = {-1,0} ;
    SHP[5].bp[1][1] = {0,0} ;
    SHP[5].bp[2][1] = {1,0} ;
    SHP[5].bp[3][1] = {1,-1} ;

    SHP[6].bp[0][1] = {-1,0} ;
    SHP[6].bp[1][1] = {0,0} ;
    SHP[6].bp[2][1] = {1,0} ;
    SHP[6].bp[3][1] = {0,-1} ;
}
void state2(){
    SHP[0].bp[0][2] = {0,-1} ;
    SHP[0].bp[1][2] = {0,0} ;
    SHP[0].bp[2][2] = {0,1} ;
    SHP[0].bp[3][2] = {0,2} ;

    SHP[1].bp[0][2] = {0,0} ;
    SHP[1].bp[1][2] = {1,0} ;
    SHP[1].bp[2][2] = {0,1} ;
    SHP[1].bp[3][2] = {1,1} ;

    SHP[2].bp[0][2] = {0,0} ;
    SHP[2].bp[1][2] = {0,1} ;
    SHP[2].bp[2][2] = {1,0} ;
    SHP[2].bp[3][2] = {1,-1} ;

    SHP[3].bp[0][2] = {0,0} ;
    SHP[3].bp[1][2] = {0,-1} ;
    SHP[3].bp[2][2] = {1,0} ;
    SHP[3].bp[3][2] = {1,1} ;

    SHP[4].bp[0][2] = {0,-1} ;
    SHP[4].bp[1][2] = {0,0} ;
    SHP[4].bp[2][2] = {0,1} ;
    SHP[4].bp[3][2] = {1,-1} ;

    SHP[5].bp[0][2] = {0,0} ;
    SHP[5].bp[1][2] = {0,-1} ;
    SHP[5].bp[2][2] = {0,1} ;
    SHP[5].bp[3][2] = {-1,-1} ;

    SHP[6].bp[0][2] = {0,-1} ;
    SHP[6].bp[1][2] = {0,0} ;
    SHP[6].bp[2][2] = {0,1} ;
    SHP[6].bp[3][2] = { -1,0} ;

}

void state3(){
    SHP[0].bp[0][3] = {0,0} ;
    SHP[0].bp[1][3] = {-1,0} ;
    SHP[0].bp[2][3] = {1,0} ;
    SHP[0].bp[3][3] = {2,0} ;

    SHP[1].bp[0][3] = {0,0} ;
    SHP[1].bp[1][3] = {1,0} ;
    SHP[1].bp[2][3] = {0,1} ;
    SHP[1].bp[3][3] = {1,1} ;

    SHP[2].bp[0][3] = {0,0} ;
    SHP[2].bp[1][3] = {-1,0} ;
    SHP[2].bp[2][3] = {0,1} ;
    SHP[2].bp[3][3] = {1,1} ;

    SHP[3].bp[0][3] = {0,0} ;
    SHP[3].bp[1][3] = {0,1} ;
    SHP[3].bp[2][3] = {-1,1} ;
    SHP[3].bp[3][3] = {1,0} ;

    SHP[4].bp[0][3] = {-1,-1} ;
    SHP[4].bp[1][3] = {-1,0} ;
    SHP[4].bp[2][3] = {0,0} ;
    SHP[4].bp[3][3] = {1,0} ;

    SHP[5].bp[0][3] = {-1,0} ;
    SHP[5].bp[1][3] = {0,0} ;
    SHP[5].bp[2][3] = {1,0} ;
    SHP[5].bp[3][3] = {-1,1} ;

    SHP[6].bp[0][3] = {-1,0} ;
    SHP[6].bp[1][3] = {0,0} ;
    SHP[6].bp[2][3] = {1,0} ;
    SHP[6].bp[3][3] = {0,1} ;
}
void t_box(){                   //        for testing , just a single box
    SHP[7].bp[0][0] = {0,0} ;
    SHP[7].bp[1][0] = {0,0} ;
    SHP[7].bp[2][0] = {0,0} ;
    SHP[7].bp[3][0] = {0,0} ;

    SHP[7].bp[0][1] = {0,0} ;
    SHP[7].bp[1][1] = {0,0} ;
    SHP[7].bp[2][1] = {0,0} ;
    SHP[7].bp[3][1] = {0,0} ;

    SHP[7].bp[0][2] = {0,0} ;
    SHP[7].bp[1][2] = {0,0} ;
    SHP[7].bp[2][2] = {0,0} ;
    SHP[7].bp[3][2] = {0,0} ;

    SHP[7].bp[0][3] = {0,0} ;
    SHP[7].bp[1][3] = {0,0} ;
    SHP[7].bp[2][3] = {0,0} ;
    SHP[7].bp[3][3] = {0,0} ;

}

    int dig[10][7] ={} ;

    void dig_in(){
        dig[0][0]=1 ;dig[0][3]=1 ;dig[0][6]=1 ;dig[0][5]=1 ; dig[0][4]=1 ;dig[0][1]=1 ;
        dig[1][3]=1 ; dig[1][6]=1 ;
        dig[2][0]=1 ;dig[2][3]=1 ;dig[2][2]=1; dig[2][4]=1 ;dig[2][5]=1 ;
        dig[3][0]=1 ; dig[3][3]=1 ; dig[3][2]=1 ; dig[3][6]=1 ; dig[3][5]= 1 ;
        dig[4][1]=1 ; dig[4][2]=1 ; dig[4][3]=1 ; dig[4][6]=1 ;
        dig[5][0]=1 ; dig[5][1]=1 ; dig[5][2]=1 ; dig[5][6]=1 ; dig[5][5]=1 ;
        dig[6][0]=1 ; dig[6][1]=1 ; dig[6][2]=1 ; dig[6][6]=1 ; dig[6][5]=1 ; dig[6][4]=1 ;
        dig[7][3]=1 ; dig[7][6]=1 ; dig[7][0]=1 ;
        dig[8][0]=1 ;dig[8][3]=1 ;dig[8][6]=1 ;dig[8][5]=1 ; dig[8][4]=1 ;dig[8][1]=1 ;dig[8][2]=1 ;
        dig[9][0]=1 ;dig[9][3]=1 ;dig[9][6]=1 ;dig[9][5]=1 ; dig[9][1]=1 ;dig[9][2]=1 ;

   }




#endif // TETROMINO_H_INCLUDED
