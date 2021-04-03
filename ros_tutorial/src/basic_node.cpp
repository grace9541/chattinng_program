#include <ros/ros.h>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "basic_node");
  ros::NodeHandle nh;


  int box_1 = 0;

   while (box_1 < 10)
   {
     std::cout << "2학년 7반 16번 조은혜" << std::endl;
     box_1++;
   }


  ROS_INFO("gra");
}
