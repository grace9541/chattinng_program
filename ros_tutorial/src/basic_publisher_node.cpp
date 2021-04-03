#include "ros/ros.h"
#include "std_msgs/String.h"

//#include <boost/algorithm/string/replace.hpp>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "eh_basic_publisher_node");
  ros::NodeHandle nh;

  ros::Publisher chatter_pub = nh.advertise<std_msgs::String>("chatter", 1000);

  ros::Rate loop_rate(10);

  std::string name;
  std::cout << "이름을 입력하세요 : ";

  getline(std::cin, name);
  //boost::replace_all(name, " ", "_");

  while (ros::ok())
  {
    std::string message;
    std::cout << "채팅을 입력하세요 : ";

    getline(std::cin, message);
   // boost::replace_all(message, " ", "_");

    std_msgs::String msg;
    msg.data= name + " : " + message;;

    chatter_pub.publish(msg);

    ros::spinOnce();

    loop_rate.sleep();
  }

  return 0;
}
