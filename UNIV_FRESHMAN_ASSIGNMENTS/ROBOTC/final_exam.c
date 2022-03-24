#pragma config(Sensor, S1, ultra_front, sensorEV3_Ultrasonic)//set the ultrasonic sensor to check front of the robot
#pragma config(Sensor, S2, ultra_left, sensorEV3_Ultrasonic)//set the ultrasonic sensor to check left of the robot
#pragma config(Sensor, S3, ultra_right, sensorEV3_Ultrasonic)//set the ultrasonic sensor to check right of the robot
#define LEFT_MOTOR motorC
#define RIGHT_MOTOR motorB
#define SWEEP_MOTOR motorA

int basic_rotate_count=0;//set the robot's rotation's direction if there's not obstacle in left, right side of the robot. and to avoid infinite rotation.

void go_and_check_front();
void check_obstacle();
void sweep_floor();

task main()
{
	while(true)//sweep floor every time
		{
			go_and_check_front();//move forward
			check_obstacle();// check obstacle and rotate



		}

}
void sweep_floor()
{
	resetMotorEncoder( motorA );
  setMotorTarget( motorA, -150, 10 );//set the motor's rotation's direction to inside, sweep dust to the dustpan
  wait1Msec(4000);
  setMotorTarget( motorA, 150, 20 );//back to the normal state
  wait1Msec(4000);
}
void go_and_check_front()
{
	int value;
   value = SensorValue( ultra_front );
   //normal status, sweep floor
if(value>20)//if obstacle didn't exist, keep going
	{
	  motor[LEFT_MOTOR] = 20;
    motor[RIGHT_MOTOR] = 20;
  }
  else//if obstacle exists, move slowly
  	{
  	motor[LEFT_MOTOR] = 10;
    motor[RIGHT_MOTOR] = 10;

  }
  //

}
void check_obstacle()
{
	int degree;
float angle = 90.0;
float radius = 2.8;
float axis = 12.0/2.0;
int basic_rotate_count=0;
degree = (int)( axis / radius * angle );//set the robot's rotation's angle to 90.

	int front,right,left;
   front = SensorValue( ultra_front );
   right = SensorValue( ultra_right );
   left = SensorValue( ultra_left );
	if(front<5)
	{
		if(right<5)//if obstacle exists in front, right side of the robot
		{
			sweep_floor();//sweep floor
			//rotation to left
			resetMotorEncoder( motorB );
resetMotorEncoder( motorC );
setMotorTarget( motorB, degree, 10);
setMotorTarget( motorC, -degree, 10);
//

//move foward to sweep the other floor
    motor[LEFT_MOTOR] = 10;
    motor[RIGHT_MOTOR] = 10;
    wait1Msec(1000);
//

//rotation to left again
resetMotorEncoder( motorB );
resetMotorEncoder( motorC );
setMotorTarget( motorB, degree, 10);
setMotorTarget( motorC, -degree, 10);
//
		}
		if(left<5)//if obstacle exists in front, left side of the robot
		{
			sweep_floor();//sweep floor

		//rotation to right
			resetMotorEncoder( motorB );
resetMotorEncoder( motorC );
setMotorTarget( motorB, -degree, 10);
setMotorTarget( motorC, degree, 10);
//

//move foward to sweep the other floor
motor[LEFT_MOTOR] = 10;
    motor[RIGHT_MOTOR] = 10;
    wait1Msec(1000);
//

    //rotation to left again
    resetMotorEncoder( motorB );
resetMotorEncoder( motorC );
setMotorTarget( motorB, -degree, 10);
setMotorTarget( motorC, degree, 10);
//
		}
		if(right>5&&left>5)//if obstacle exists only in front side of the robot
		{
			if(basic_rotate_count==0)//rotate In the order of right and left. and repeat this if obstacle exists only in front side of the robot
				{
					sweep_floor();//sweep floor

		//rotation to right
resetMotorEncoder( motorB );
resetMotorEncoder( motorC );
setMotorTarget( motorB, -degree, 10);
setMotorTarget( motorC, degree, 10);
//

//move foward to sweep the other floor
motor[LEFT_MOTOR] = 10;
    motor[RIGHT_MOTOR] = 10;
    wait1Msec(1000);
 //

    //rotation to left again
    resetMotorEncoder( motorB );
resetMotorEncoder( motorC );
setMotorTarget( motorB, -degree, 10);
setMotorTarget( motorC, degree, 10);
//
basic_rotate_count=1;//set the next rotation's direction to left

				}
		  else
		  {
		  	sweep_floor();//sweep floor

		  //rotation to right
		  	resetMotorEncoder( motorB );
resetMotorEncoder( motorC );
setMotorTarget( motorB, degree, 10);
setMotorTarget( motorC, -degree, 10);
//

//move foward to sweep the other floor
motor[LEFT_MOTOR] = 10;
    motor[RIGHT_MOTOR] = 10;
    wait1Msec(1000);
    //

    //rotation to left again
    resetMotorEncoder( motorB );
resetMotorEncoder( motorC );
setMotorTarget( motorB, degree, 10);
setMotorTarget( motorC, -degree, 10);
//

basic_rotate_count=0;//set the next rotation's direction to right

		  }


		}

	}
}
