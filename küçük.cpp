
void followLine()
{
    /*
    Starts from the safe zone.
    Insert line follower code here.
    */ 
}

void roomSearch()
{
    // WIFI off
    // Distance sensors are in use
    // QTR is in use
    enum Option {1 , 2, 3};

    Option opt ;

    switch(opt)
    {
        case 1 :
            /*
            keep x cm distance from the right wall until no wall is detected on the right.
            do a 90deg right turn
            keep x1 cm distance from the right wall until no wall is detected on the right.
            do a 90deg right turn
            enter roomFre()
            */
        case 2 :
            /*
            Follow the line, enter second room perpendicularly
            enter roomFre()
            */   
        case 3 :
            /*
            go straight until the distance between the robot and the opposite wall is x2 cm
            turn right
            keep x3 cm distance from the wall on the right.
                turn right
            go straight till there is no longer a wall on the right.
            go back until a wall on the right is redetected
            turn left
            maintain x4 cm distance from the opposite wall.
            turn left
            keep x5 cm distance from the wall on the right.
            turn right
            keep x6 cm distance from the right wall until no wall is detected on the right.
            do a 90 deg right turn
            enter roomFre()
            */
    }
}

void exitRoomSec()
{
    // WIFI off
    // Distance sensors are in use
    // QTR is in use

    /*
    move forward until the distance between the robot and the opposite wall is x7 cm
    turn 90 deg left
    keep x8 cm distamce from the left wall untill no wall is detected
    turn 90 deg left
    keep x9 cm distance from the left wall
    when the action is interrupted by a detection of line by the qtr, enter followLine()
    */
}

void roomFre()
{
    // Color sensor is in use
    // WIFI off
    // Distance sensors are in use

    /*
    move forward so as to keep the distance betweenn the rob and the opp. wall x10 cm
    stop
    calculate frequency + save it as tempFre1
    wait for 0.5 sec
    calculate frequency + save it as tempFre2
    wait for 0.5 sec
    calculate frequency + save it as tempFre3

    check if the three frequencies are in the same tolerable range 
        if yes 
            match room number and the freq
            do a 180 deg turn back
            move forward until the distance to the opp wall is 60 cm
        if no 
            while no
                set the contradicting result(s) to 0
                calculate frequency until all deleted frequencies are recalculated
                check whether they are in the same tolerable range
                    
    */

}



