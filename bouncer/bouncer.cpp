/**
 * @file bouncer.cpp
 * @author siavava <amittaijoel@outlook.com>
 * @brief: Simple bouncing game in CPP
 * @version 0.1
 * @date 2021-07-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
using namespace std;


#define DELAY 100000000L                                        /* Output Delay */
#define CLS (cout << "\033[2J")                                 /* clear screen */
#define LOCATE(z, s) (cout << "\033[" << z << ';' << s << 'H')  /* position cursor in row, col */

int
main()
{
  int x(2), y(3), dx(1), speed(0);                              /* starting position, speed */

  string floor(79, '-'), 
         header("       *****      BOUNCING BALL      *****");  /* floor of surface */

  CLS;                                                          /* clear screen */
  LOCATE(1, 25); cout << header;                                /* print header */
  LOCATE(25, 1); cout << floor;                                 /* print floor */

  while (true) {                                                /* infinite loop... ... ... */
    LOCATE(y, x); cout << 'o' << endl;                          /* find current position, print ball */
    for (long wait = 0; wait < DELAY; ++wait) {                 /* wait */
      ;
    }
    dx = (x == 1 || x == 79) ? -dx : dx;                        /* if hit a wall, reverse dx */                      

    if (y == 24) {              
      speed = -speed;                   /* if on floor, reverse speed (bounce) */
      if (speed == 0) speed = -7;       /* if speed is 0 (max ascent), reset */
    } 
    speed++;                            /* accelerate */
    LOCATE(y, x); cout << ' ';          /* replace ball as it moves */

    y += speed;                         /* update ball y pos */
    x += dx;                            /* update ball x pos */
  }

  return 0;
}